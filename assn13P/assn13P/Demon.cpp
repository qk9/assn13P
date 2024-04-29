#include "Demon.h"

namespace cs_creature {

	Demon::Demon() {
	}






	Demon::Demon(int inStrength, int inHitpoints) : Creature(inStrength, inHitpoints) {
	}






	int Demon::getDamage() const {
		int damage = Creature::getDamage();
		std::cout << "attacks for " << damage << " points!" << std::endl;
		if (rand() % 100 * 0.01 < DEMONIC_ATTACK_PROBABILITY) {
			std::cout << "Demonic attack inflicts " << DEMONIC_ATTACK_DAMAGE << " additional damage points!" << std::endl;
			damage += DEMONIC_ATTACK_DAMAGE;
		}
		return damage;
	}






	std::string Demon::getSpecies() const {
		return "demon";
	}
}