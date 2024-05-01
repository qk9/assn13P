#include "Balrog.h"

namespace cs_creature {

	Balrog::Balrog() {
	}






	Balrog::Balrog(int inStrength, int inHitpoints) : Demon(inStrength, inHitpoints) {
	}






	int Balrog::getDamage() const {
		//std::cout << "The balrog ";
		int damage1 = Demon::getDamage();

		int damage2 = rand() % getStrength() + 1;
		std::cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << std::endl;
		return damage1 + damage2;
	}






	std::string Balrog::getSpecies() const {
		return "balrog";
	}
}