#include "header.h"

class Point2D {
    public:
        double x;
        double y;

    Point2D() : x(0.0), y(0.0) {}
    Point2D(double x, double y) : x(x), y(y) {}
};

class Point3D {
    public:
        double x;
        double y;
        double z;

    Point3D() : x(0.0), y(0.0), z(0.0) {}
    Point3D(double x, double y, double z) : x(x), y(y), z(z) {}
};

class Line {
    public:
        double m;
        Point2D p;
    
    Line(Point2D p1, Point2D p2) : m((p2.y - p1.y) / (p2.x - p1.x)), p(p1) {}

    bool belongs_in_line(Point2D pn) {
        double a = (pn.y - p.y) / (pn.x - p.x);
        return (a == m);
    }

    double get_y(double x) {
        return (m * (x-p.x)) + p.y;
    }

    double get_x(double y) {
        return (y-p.y+m*p.x) / m;
    }
};

double distance_between_points2D(Point2D p1, Point2D p2) {
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}

double distance_between_points3D(Point3D p1, Point3D p2) {
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2) + pow((p1.z - p2.z), 2));
}

double distance_to_point(Point2D p, Line l) {
    // Calcular o coeficiente b da reta: y = mx + b
    double b = l.p.y - l.m * l.p.x;

    // Calcular a distância usando a fórmula
    double numerator = abs(l.m * p.x - p.y + b);
    double denominator = sqrt(l.m * l.m + 1);

    return numerator / denominator;
}