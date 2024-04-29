#include "Elf.h"
namespace cs_creature {

	Elf::Elf() {
	}






	Elf::Elf(int inStrength, int inHitpoints) : Creature(inStrength, inHitpoints) {
	}






	int Elf::getDamage() const {
		int damage = Creature::getDamage();
		std::cout << "The elf attacks for " << damage << " points!" << std::endl;
		if (rand() % 100 * 0.01 < MAGICAL_ATTACK_PROBABILITY) {
			std::cout << "Magical attack inflicts " << damage * MAGICAL_ATTACK_MULTIPLIER - damage << " additional damage points!" << std::endl;
			damage *= MAGICAL_ATTACK_MULTIPLIER;
		}
		return damage;
	}






	std::string Elf::getSpecies() const {
		return "elf";
	}
}