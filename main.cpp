#include "sculptor.h"
#include "readfile.h"

using namespace std;

int main() {
    Sculptor *objSculptor(ReadFile("/home/oem/Cpp-Projects/escultor3D/testeDesenhos/trono.txt").objSculptor);
    objSculptor->writeOFF("/home/oem/Cpp-Projects/escultor3D/testeDesenhos/trono.off");

    return 0;
}
