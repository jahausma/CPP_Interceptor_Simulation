cmake_minimum_required(VERSION 3.20)

project(MissileSimulation)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MissileSimulation
    Main.cpp

    Simulation/Simulation.cpp

    World/World.cpp

    Entities/Drone.cpp
    Entities/Target.cpp
    Entities/Entity.cpp

    Guidance/PurePursuit.cpp
    Guidance/ProNav.cpp

    Sensors/Sensor.cpp
    Sensors/RadarSensor.cpp

    Math/Vector3.cpp
)

target_include_directories(MissileSimulation PRIVATE
    .
)