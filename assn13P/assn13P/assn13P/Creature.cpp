#include "Creature.h"
namespace cs_creature {
    Creature::Creature() : strength(Creature::DEFAULT_STRENGTH), hitpoints(Creature::DEFAULT_HITPOINTS) {
    }






    Creature::Creature(int newStrength, int newHitpoints) : strength(newStrength), hitpoints(newHitpoints) {
    }






    int Creature::getStrength() const {
        return strength;
    }






    void Creature::setStrength(int newStrength) {
        strength = newStrength;
    }






    int Creature::getHitpoints() const {
        return hitpoints;
    }






    void Creature::setHitpoints(int newHitpoints) {
        hitpoints = newHitpoints;
    }






    int Creature::getDamage() const {
        int damage;
        damage = (rand() % strength) + 1;
        std::cout << "The " << getSpecies() << " attacks for " << damage << " points!" << std::endl;
        return damage;
    }
}