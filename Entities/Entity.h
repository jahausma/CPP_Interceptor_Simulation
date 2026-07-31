// Jacob Hausmann
// Defining entity base class and other child classes 

#pragma once

#include "Math/Vector3.h"
#include <vector> 
#include <iostream>
using namespace std;

// Base class: entity.h
// Child classes:
//  - drone
//  - target

class Entity
{   protected:
        int m_id;
        Vector3 m_position; 
        Vector3 m_velocity; 
        Vector3 m_acceleration;
         virtual void Integrate(double dt) = 0;  // pure virtual function, only entity and its derived classes can call integrate
    public:
        Entity(int id, const Vector3& position, const Vector3& velocity);   

        virtual ~Entity() = default;            // defaults to default destructor

        virtual void Update(double dt) = 0;     // pure virtual function, must be public so world can request each entity update itself
                                                // during its update loop

        const Vector3& GetVelocity() const{
            return m_velocity;
        }

        const Vector3& GetPosition() const{
            return m_position;
        }

        const int& GetId() const;
};