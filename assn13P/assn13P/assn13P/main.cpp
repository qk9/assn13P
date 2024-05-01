#include "Creature.h"
#include "Human.h"
#include "Elf.h"
#include "Demon.h"
#include "Cyberdemon.h"
#include "Balrog.h"
using namespace cs_creature;
using namespace std;

void battle(Creature& Creature1, Creature& Creature2);

const int NUM_CREATURES = 4;
const int ELF_DEFAULT_STRENGTH = 24;
const int BALROG_DEFAULT_STRENGTH = 10;
const int HUMAN_DEFAULT_STRENGTH = 100;
const int CYBERDEMON_DEFAULT_STRENGTH = 50;
const int DEFAULT_HITPOINTS = 50;

int main() {
    //srand(static_cast<unsigned>(time(nullptr)));

    Elf e(ELF_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    Balrog b(BALROG_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    Human h(HUMAN_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    Cyberdemon c(CYBERDEMON_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    Creature* creatures[] = { &b, &e, &c, &h };


    for (int i = 0; i < NUM_CREATURES; i++) {
        for (int j = i + 1; j < NUM_CREATURES; j++) {
            battle(*creatures[i], *creatures[j]);
        }
    }
}






void battle(Creature& creature1, Creature& creature2) {
    cout << "*****  Battle between the " << creature1.getSpecies() << " and the " << creature2.getSpecies() << "!!  ******" << endl;
    while (creature1.getHitpoints() > 0 && creature2.getHitpoints() > 0) {
        cout << endl;
        creature2.setHitpoints(creature2.getHitpoints() - creature1.getDamage());
        creature1.setHitpoints(creature1.getHitpoints() - creature2.getDamage());
        cout << "The " << creature1.getSpecies() << " has " << creature1.getHitpoints() << " hitpoints." << endl;
        cout << "The " << creature2.getSpecies() << " has " << creature2.getHitpoints() << " hitpoints." << endl;
    }
    cout << endl;
    if (creature1.getHitpoints() < 1 && creature2.getHitpoints() < 1) {
        cout << "The battle results in a tie!" << endl;
    }
    else if (creature1.getHitpoints() < 1) {
        cout << "The " << creature2.getSpecies() << " wins!" << endl;
    }
    else {
        cout << "The " << creature1.getSpecies() << " wins!" << endl;
    }
    cout << endl << endl;
    creature1.setHitpoints(DEFAULT_HITPOINTS);
    creature2.setHitpoints(DEFAULT_HITPOINTS);
}