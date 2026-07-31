// Jacob Hausmann
// 6/29/2026

// defines header file and interface for RadarSensor class

#include "Sensor.h"

class RadarSensor : public Sensor{
    

    public: 
        RadarSensor(double sigma);      // constructor
        Vector3 MeasurePosition(const Target& target);

    private:
        std::mt19937 m_rang;
        std::normal_distribution<double> m_noise;

};
