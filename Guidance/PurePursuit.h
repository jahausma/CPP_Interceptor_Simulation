// Jacob Hausmann
// 6/26/2026

// This file defines the class for pure pursuit guidance law
#pragma once
#include "GuidanceLaw.h"
#include "Math/Vector3.h"

class PurePursuit : public GuidanceLaw {
    private:
        double m_maxAcceleration;

    public:
    
    PurePursuit(double acceleration);

    // Compute acceleration for pure pursuit guidance
    Vector3 ComputeAcceleration(const Vector3& dronePos, const Vector3& droneVel,
                                const Vector3& tgtPos, const Vector3& tgtVel) const;
};