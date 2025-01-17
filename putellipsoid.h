#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"

class PutEllipsoid : public FiguraGeometrica
{
private:
    int xcenter;
    int ycenter;
    int zcenter;
    int rx;
    int ry;
    int rz;
    float r, g, b, a;
public:
    PutEllipsoid();
    ~PutEllipsoid();
    void draw(Sculptor &t);
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
};

#endif // PUTELLIPSOID_H
