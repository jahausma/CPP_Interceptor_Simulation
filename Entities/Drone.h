// Jacob Hausmann
// 6/202/2026

// Drone.h defines the interface for the drone class. Drone is a child to entity.

#pragma once

#include "Entity.h"
#include "Guidance/GuidanceLaw.h"
#include <bits/stdc++.h>
#include "Target.h"
#include "Sensors/Sensor.h"
#include <memory>
using namespace std;

class Drone : public Entity {
    private:
        unique_ptr<GuidanceLaw> m_guidance; 
        Target* m_target;
        unique_ptr<Sensor> m_sensor;
        double m_radius = 1.0;
    public:
        Drone(int id, const Vector3& position, const Vector3& velocity, unique_ptr<GuidanceLaw> gLaw, unique_ptr<Sensor>sensor); // drone constructor derives from entity base class

        void SetTarget(Target* tgt);

        void Update(double dt);

        void Integrate(double dt);

        double GetRadius();
};