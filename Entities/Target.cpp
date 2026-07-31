// Jacob Hausmann
// 6/202/2026

// Target.cpp defines the implementation for the Target class. Target is a child to entity.
// WE DONT NEED THIS FILE UNTIL TARGET DOES SOMETHING UNIQUE OUTSIDE OF ENTITY CLASS

#include "Target.h"

Target::Target(int id, const Vector3& position, const Vector3& velocity)
        : Entity(id, position, velocity){};

void Target::Update(double dt){

    Integrate(dt);

    // cout << "TARGET POSITION UPDATE" << endl;
    // cout << "TARGET Position x: " << m_position.x << endl;
    // cout << "TARGET Position y: " << m_position.y << endl;
    // cout << "TARGET Position z: " << m_position.z << endl;
    // cout << " " << endl;
}


void Target::Integrate(double dt){
    // constant velocity for target
    m_position += m_velocity*dt;
}


const double Target::GetRadius(){
    return radius;
}