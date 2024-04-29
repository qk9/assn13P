#include "Cyberdemon.h"

namespace cs_creature {
	Cyberdemon::Cyberdemon() {
	}






	Cyberdemon::Cyberdemon(int inStrength, int inHitpoints) : Demon(inStrength, inHitpoints) {
	}






	int Cyberdemon::getDamage() const {
		std::cout << "The cyberdemon ";
		int damage = Demon::getDamage();
		return damage;
	}






	std::string Cyberdemon::getSpecies() const {
		return "cyberdemon";
	}
}