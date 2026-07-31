// Jacob Hausmann
// 6/20/2026

// Vector3.h: defines the interface for the 3D vector class. Data variables include 3 vector components along with 
//            class methods for 3D vector mathematics.

// Vector components: double x, double y, double z 
// Methods: double normalize(), double magnitude(), vector<double> cross_product, double dot_product
// Operators: +,-, *
#pragma once

#include <iostream>

using namespace std;

class Vector3{
    public:
        double x; 
        double y;
        double z;

        Vector3();
        Vector3(double x, double y, double z);

        double Magnitude() const;

        Vector3 Normalize() const;

        double Dot_product(const Vector3& rhs) const;
        
        Vector3 Cross_product(const Vector3 &rhs) const;

        double distance(const Vector3 &rhs) const;
        
        Vector3 operator+(const Vector3& rhs) const;
        Vector3 operator-(const Vector3& rhs) const;
        Vector3 operator*(double scalar) const;
        Vector3& operator+=(const Vector3& rhs);
};