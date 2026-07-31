// Jacob Hausmann
// 6/20/2026

// Implementation of Vector3 class
#include "Vector3.h"
#include <cmath>

Vector3::Vector3() : x{0.0}, y{0.0}, z{0.0}{}

Vector3::Vector3(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
}

double Vector3::Magnitude() const{
    return sqrt(x*x + y*y + z*z);
}

Vector3 Vector3::Normalize() const{
    double mag = Magnitude();

    if (mag == 0.0){
        return Vector3();
    }

    return Vector3{x/mag, y/mag, z/mag};
}

double Vector3::distance(const Vector3& rhs) const{
    double x_dist = x - rhs.x;
    double y_dist = y - rhs.y;
    double z_dist = z - rhs.z;

    double distance = sqrt(x_dist*x_dist + y_dist*y_dist + z_dist*z_dist);

    return distance;
}

double Vector3::Dot_product(const Vector3& rhs) const{
    return x*rhs.x + y*rhs.y + z*rhs.z;
}

Vector3 Vector3::Cross_product(const Vector3& rhs) const{
    double i_comp = y*rhs.z - z*rhs.y; // a2b3 - a3b2
    double j_comp = z*rhs.x - x*rhs.z; // a3b1 - a1b3
    double k_comp = x*rhs.y - y*rhs.x; // a1b2 - a2b1

    return Vector3{i_comp, j_comp, k_comp};
}

Vector3 Vector3::operator+(const Vector3& rhs) const{
    return Vector3(x+rhs.x, y+rhs.y, z+rhs.z);
}

Vector3 Vector3::operator-(const Vector3& rhs) const{
    return Vector3(x-rhs.x, y-rhs.y, z-rhs.z);
}

Vector3 Vector3::operator*(double scalar) const{
    return Vector3(x*scalar, y*scalar, z*scalar);
}

Vector3& Vector3::operator+=(const Vector3 & rhs){
    x += rhs.x;
    y += rhs.y;
    z += rhs.z;

    return *this;
}