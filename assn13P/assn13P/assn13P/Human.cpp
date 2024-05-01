#include "Human.h"

namespace cs_creature {

	Human::Human() {
	}






	Human::Human(int inStrength, int inHitpoints) : Creature(inStrength, inHitpoints) {
	}






	std::string Human::getSpecies() const {
		return "human";
	}
}