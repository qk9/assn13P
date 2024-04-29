#ifndef ELF_H
#define ELF_H

#include "Creature.h"

namespace cs_creature {
	class Elf : public Creature {
	public:
		static constexpr double MAGICAL_ATTACK_PROBABILITY = 0.5;
		static constexpr double MAGICAL_ATTACK_MULTIPLIER = 2.0;
		Elf();
		Elf(int inStrength, int inHitpoints);
		int getDamage() const;
		std::string getSpecies() const;
	};
}
#endif
