// Jacob Hausmann
// 6/26/2026

// this file defines the simulation loop and how the simulation is updated.

#include "Simulation.h"
#include "Guidance/PurePursuit.h"
#include <memory>
using namespace std;

Simulation::Simulation() = default;

void Simulation::Initialize(){
    
    // create drone and target unique pointers
    auto drone = std::make_unique<Drone>(1, Vector3(0.0, 0., 0.0), Vector3(10.0, 10.0, 10.0), std::make_unique<PurePursuit>(10.0), std::make_unique<RadarSensor>(1.0));
    auto target = std::make_unique<Target>(2, Vector3(1000.0, 1000.0, 1000.0), Vector3(-10.0, -10.0, -10.0));

    // establish connection between drone and target
    drone->SetTarget(target.get());

    // transfer ownership of drone and target unique_ptrs to m_world
    m_world.AddEntity(move(drone));
    m_world.AddEntity(move(target));
}

void Simulation::Run(){

    while(!ShouldTerminate()){

        // update the world
        m_world.Update(m_dt);

        // update the logging
        // m_log.Log(m_world);

        m_currentTime += m_dt;

        cout << "------------------------------" << endl;
        cout << "Current Time: " << m_currentTime << endl;
        cout << " " << endl;
    }


}

double Simulation::GetCurrentTime() const{
    return m_currentTime;
}

bool Simulation::ShouldTerminate() const{
    return m_world.CheckCollisions();
}