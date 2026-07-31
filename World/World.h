// Jacob Hausmann
// 6/26/2026

// File defines the world interface and class
#pragma once
#include "Entities/Drone.h"
#include "Entities/Target.h"
#include "Entities/Entity.h"
#include <memory>

class World{
    private:
        vector<std::unique_ptr<Entity>> m_entities; // vector of entities that are in the world
    
    public:
        World(){
            cout << "World created!!!";
        }

        void Update(double dt);

        // adding entity to world
        void AddEntity(unique_ptr<Entity> ent);

        // removing dead entities fromw world
        void RemoveDeadEntities();
        // void kill_entity(unique_ptr<Entity> ent){
        //     m_entities.erase(ent->GetId());
        // }

        bool CheckCollisions() const;

        bool HasIntercepted(Target& t, Drone& d) const;

};