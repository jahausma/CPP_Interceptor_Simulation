// Jacob Hausmann
//  6/29/2026

// Defining the interface of Integrator class

#include "Math/Vector3.h"
#include <function>
using namespace std;


struct KinematicState{
    Vector3 position;
    Vector3 velocity;
};

using DynamicsFunction = std::function<Vector3(const KinematicState&)>;

class Integrator{

    public:
        virtual ~Integrator() = default;

        virtual void Integrate(KinematicState& state,
                               const Vector3& acceleration,
                               double dt) = 0;
};