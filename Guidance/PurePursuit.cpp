// Jacob Hausmann
// 6/27/2026

// File for defining implementation of PurePurusit member functions

#include "PurePursuit.h"
#include <bits/stdc++.h>

PurePursuit::PurePursuit(double acceleration) : m_maxAcceleration(acceleration) {};

Vector3 PurePursuit::ComputeAcceleration(const Vector3& dronePos, const Vector3& droneVel,
                                const Vector3& tgtPos, const Vector3& tgtVel) const {
    // calculate the vector from the drone to the target
    Vector3 los = tgtPos - dronePos;

    // acceleration is the unit vector times the acceleration the drone can command
    return los.Normalize()*m_maxAcceleration;
}