#ifndef BALROG_H
#define BALROG_H

#include "Demon.h"

namespace cs_creature {
	class Balrog : public Demon {
	public:
		Balrog();
		Balrog(int inStrength, int inHitpoints);
		int getDamage() const;
		std::string getSpecies() const;
	};
}
#endif