#include "sculptor.h"
#include "readfile.h"

using namespace std;

int main() {
    Sculptor *objSculptor(ReadFile("/desenhos/trono.txt").objSculptor);
    objSculptor->writeOFF("/desenhos/trono.off");

    return 0;
}
