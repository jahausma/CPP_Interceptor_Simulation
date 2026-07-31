// Jacob Hausmann
// 6/202/2026

// Target.h defines the interface for the Target class. Target is a child to entity.

#pragma once
#include "Entity.h"

class Target : public Entity{
    private:
        double radius = 1.0;
        void Integrate(double dt);
    public: 
        Target(int id, const Vector3& position, const Vector3& velocity);
        void Update(double dt);
        const double GetRadius();
};