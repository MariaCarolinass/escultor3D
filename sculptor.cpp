#include "sculptor.h"

Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    nx = _nx; // planos
    ny = _ny; // linhas
    nz = _nz; // colunas
    
    // alocação de memória do primeiro ponteiro 
    v = new Voxel **[nx];

    for (int i = 0; i < nx; i++) {
        // alocação do segundo ponteiro
        v[i] = new Voxel *[ny];
    
        for (int j = 0; j < ny; j++) {
            // alocação do terceiro ponteiro
            v[i][j] = new Voxel[nz];
            
            // defindo variáveis com valor padrão 
            for (int k = 0; k < nz; k++) {
                v[i][j][k].r = 0; 
                v[i][j][k].g = 0;
                v[i][j][k].b = 0;
                v[i][j][k].a = 0;
                v[i][j][k].show = false;
            }
        }
    }
}

Sculptor::~Sculptor()
{
    // liberação de memória dos ponteiros
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            delete[] v[i][j]; // libera o terceiro ponteiro
        }
        delete[] v[i]; // libera o segundo ponteiro
    }
    delete[] v; // libera o primeiro ponteiro

    // liberando variáveis com zero
    nx = 0;
    ny = 0;
    nz = 0;
    r = 0; 
    g = 0;
    b = 0;
    a = 0;
}

void Sculptor::setColor(float _r, float _g, float _b, float _a)
{
    r = _r;
    g = _g;
    b = _b;
    a = _a;
}

void Sculptor::putVoxel(int x, int y, int z)
{
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;
    v[x][y][z].show = true;
}

void Sculptor::cutVoxel(int x, int y, int z)
{
    v[x][y][z].show = false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{

}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{

}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius)
{

}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{

}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{

}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{

}

void Sculptor::writeOFF(const char *filename)
{

}
