// Jacob Hausmann
// 6/27/2026

// File to set up implementation of functions for world class

#include "World.h"
#include "Entities/Drone.h"
#include <bits/stdc++.h>


void World::Update(double dt){
    // iterate through entities vector to update each one in world
    for(auto& entity : m_entities){
        entity->Update(dt);
    }

    // RemoveDeadEntities();
}

void World::AddEntity(unique_ptr<Entity> ent){
    m_entities.push_back(std::move(ent));
}

bool World::HasIntercepted(Target& t, Drone& d) const{
    
    double distance = (t.GetPosition() - d.GetPosition()).Magnitude();

    cout << "Distance between drone and target = " << distance << endl;
    
    return distance < d.GetRadius() + t.GetRadius();
}

bool World::CheckCollisions() const{
    Drone* drone;
    Target* target;

    for(auto& entity : m_entities){
        if(auto d = dynamic_cast<Drone*>(entity.get())){
            drone = d;
        }

        if(auto t = dynamic_cast<Target*>(entity.get())){
            target = t;
        }
    }

    if(target && drone){
        if(HasIntercepted(*target, *drone)){
            return true;
        }
    }

    return false;
}

// void World::RemoveDeadEntities(){
    // maybe use unordered map for this
// }