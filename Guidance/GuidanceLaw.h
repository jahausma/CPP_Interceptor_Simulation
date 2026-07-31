// Jacob Hausmann
// 6/20/2026

// GuidanceLaw.h defines the interface for the GuidanceLaw class.
#pragma once

#include "Math/Vector3.h"

class GuidanceLaw{
    public:
        virtual ~GuidanceLaw() = default;

        virtual Vector3 ComputeAcceleration(const Vector3& dronePos, const Vector3& droneVel,
                                const Vector3& tgtPos, const Vector3& tgtVel) const = 0;
};