// Jacob Hausmann 
// 6/20/2026

// Main.cpp for simple C++ drone interceptor simulation

#include "Simulation/Simulation.h"
#include "Entities/Entity.h"
#include <bits/stdc++.h>

bool isTerminated = false;

int main(){

    Simulation sim;

    sim.Initialize();
    
    sim.Run();

    cout << "Intercepted at: " << sim.GetCurrentTime() << endl;
    
}