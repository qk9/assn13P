#include "Human.h"

namespace cs_creature {

	Human::Human() {
	}






	Human::Human(int inStrength, int inHitpoints) : Creature(inStrength, inHitpoints) {
	}






	int Human::getDamage() const {
		int damage = Creature::getDamage();
		std::cout << "The human attacks for " << damage << " points!" << std::endl;
		return damage;
	}






	std::string Human::getSpecies() const {
		return "human";
	}
}