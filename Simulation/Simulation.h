// Jacob Hausmann
// 6/26/2026    

// This file defines the simulation interface and class
#pragma once
#include "Logging/Logger.h"
#include "World/World.h"
#include "Math/Vector3.h"
#include "Entities/Drone.h"
#include "Entities/Target.h"
#include "Sensors/RadarSensor.h"
#include "Guidance/PurePursuit.h"
#include <bits/stdc++.h>

class Simulation{
    // public access specifier
    public:
        Simulation();
        void Initialize();
        void Randomize();
        void Run();
        double GetCurrentTime() const;

    private:
        World m_world; // there is only one world and the simulation owns it (no need for smart pointer)
        Logger m_log; // there is only one log and the simulation owns it (no need for smart pointer)
        double m_currentTime = 0.0; // current simulation time, initialized to 0 
        double m_dt = 0.01; // 10 ms timestep
        bool ShouldTerminate() const; // const inside () means cant change function parameter. Const outside means cant change member variables
        
};



// void Initialize(){};
// void Run(){};