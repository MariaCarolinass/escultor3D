# include "sculptor.h"

int main() {
    Sculptor trono(10, 10, 10);
    trono.setColor(0, 0, 1.0, 1.0);
    trono.putBox(0, 9, 0, 9, 0, 9);
    trono.cutBox(1, 8, 1, 9, 1, 9);
    trono.writeOFF("trono.off");

    Sculptor sphere(20, 20, 20);
    sphere.setColor(0, 255, 0, 1.0);
    sphere.putSphere(10, 10, 10, 10);
    sphere.cutSphere(10, 10, 10, 5);
    sphere.writeOFF("esfera.off");

    Sculptor ellipsoid(20, 20, 20);
    ellipsoid.setColor(128, 0, 128, 1.0);
    ellipsoid.putEllipsoid(10, 10, 10, 6, 4, 3);
    ellipsoid.cutEllipsoid(10, 10, 10, 3, 2, 2);
    ellipsoid.writeOFF("elipsoide.off");

    return 0;
}
