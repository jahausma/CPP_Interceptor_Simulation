// Jacob Hausmann
// 6/26/2026

// File for implementation of Entity class

#include "Entity.h"

Entity::Entity(int id, const Vector3& position, const Vector3& velocity)
                : m_id{id}, m_position{position}, m_velocity{velocity}{}

const int& Entity::GetId() const{
    return m_id;
}

