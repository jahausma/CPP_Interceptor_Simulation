// Jacob Hausmann
// 6/20/2026

// ProNav.h defines the interface for the ProNav guidance law class.
#pragma once
#include "GuidanceLaw.h"
#include "Math/Vector3.h"

class ProNav : public GuidanceLaw {

    // pure pronav equation
    // a = N * lambda_dot * V_c
    private:
        double N = 3; // proNav gain
    public:
        Vector3 compute_acceleration(const Vector3& dronePos,
                                     const Vector3& droneVel,
                                     const Vector3& tgtPos,
                                     const Vector3& tgtVel){}
        
};