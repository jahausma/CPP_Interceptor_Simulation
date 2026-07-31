// Jacob Hausmann
// 6/20/2026

// ProNav.cpp defines the implementation for the methods related to the ProNav class.

#include "Math/Vector3.h"
#include "GuidanceLaw.h"

class ProNav : public GuidanceLaw {

    public:

    Vector3 compute_acceleration(
    const Vector3& dronePos,
    const Vector3& droneVel,
    const Vector3& tgtPos,
    const Vector3& tgtVel
    ){
        Vector3 toTarget = tgtPos - dronePos;
    }

};