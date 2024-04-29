#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "Demon.h"

namespace cs_creature {
	class Cyberdemon : public Demon {
	public:
		Cyberdemon();
		Cyberdemon(int inStrength, int inHitpoints);
		int getDamage() const;
		std::string getSpecies() const;
	};
}
#endif