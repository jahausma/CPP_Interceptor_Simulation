// Jacob Hausmann 
// 6/29/2026

// defines implementation of RadarSensor class

#include "RadarSensor.h"

RadarSensor::RadarSensor(double sigma) : m_rang(random_device{}()), m_noise(0.0,sigma){}

Vector3 RadarSensor::MeasurePosition(const Target& target){
    Vector3 truth = target.GetPosition();

    return {
        truth.x + m_noise(m_rang),
        truth.y + m_noise(m_rang),
        truth.z + m_noise(m_rang)
    };
}