#include "header.h"

class Ponto2D {
    public:
        double x;
        double y;

    Ponto2D() : x(0.0), y(0.0) {}
    Ponto2D(double x, double y) : x(x), y(y) {}
};

class Ponto3D {
    public:
        double x;
        double y;
        double z;

    Ponto3D() : x(0.0), y(0.0), z(0.0) {}
    Ponto3D(double x, double y, double z) : x(x), y(y), z(z) {}
};