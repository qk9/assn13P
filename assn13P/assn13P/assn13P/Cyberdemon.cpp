#include "Cyberdemon.h"

namespace cs_creature {
	Cyberdemon::Cyberdemon() {
	}






	Cyberdemon::Cyberdemon(int inStrength, int inHitpoints) : Demon(inStrength, inHitpoints) {
	}






	std::string Cyberdemon::getSpecies() const {
		return "cyberdemon";
	}
}