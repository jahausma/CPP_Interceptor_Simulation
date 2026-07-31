// Jacob Hausmann
// 6/27/2026

// defines implementation of Drone member functions

#include "Drone.h"

Drone::Drone(int id, const Vector3& position, const Vector3& velocity, unique_ptr<GuidanceLaw> gLaw, unique_ptr<Sensor>sensor)
            : Entity(id, position, velocity), m_guidance(move(gLaw)), m_sensor(move(sensor)){}; // constructor implementation

void Drone::Update(double dt){

    Vector3 measuredPosition = m_sensor->MeasurePosition(*m_target);
    // we first calculate acceleration based on guidance law
    Vector3 m_acceleration = m_guidance->ComputeAcceleration(m_position, m_velocity, measuredPosition, m_target->GetVelocity());

    Integrate(dt);
    
    // cout << "DRONE POSITION UPDATE" << endl;
    // cout << "Drone Position x: " << m_position.x << endl;
    // cout << "Drone Position y: " << m_position.y << endl;
    // cout << "Drone Position z: " << m_position.z << endl;
    // cout << " " << endl;
}

void Drone::SetTarget(Target* tgt){
    m_target = tgt;
}

void Drone::Integrate(double dt){
    // we use semi-implicit Euler method. We use updated velocity to integrate position.
    m_velocity += m_acceleration*dt;

    m_position += m_velocity*dt;
}

double Drone::GetRadius(){
    return m_radius;
}

