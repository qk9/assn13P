#ifndef DEMON_H
#define DEMON_H

#include "Creature.h"

namespace cs_creature {
	class Demon : public Creature {
	public:
		static constexpr double DEMONIC_ATTACK_PROBABILITY = 0.25;
		static const int DEMONIC_ATTACK_DAMAGE = 50;
		Demon();
		Demon(int inStrength, int inHitpoints);
		int getDamage() const;
		std::string getSpecies() const;
	};
}
#endif
