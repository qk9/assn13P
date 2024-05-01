#ifndef CREATURE_H
#define CREATURE_H

#include <string>
#include <cstdlib>
#include <iostream>
namespace cs_creature {
    class Creature {
    private:
        int strength;
        int hitpoints;
        static const int DEFAULT_STRENGTH = 10;
        static const int DEFAULT_HITPOINTS = 10;
    public:
        Creature();
        Creature(int newStrength, int newHitpoints);
        int getStrength() const;
        void setStrength(int newStrength);
        int getHitpoints() const;
        void setHitpoints(int newHitpoints);
        virtual int getDamage() const;
        virtual std::string getSpecies() const = 0;   
    };
}

#endif