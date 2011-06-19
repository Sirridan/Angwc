#include "Creature.h"

Creature::Creature()
{
	pLoc = new Location();
}

Creature::~Creature()
{
	delete pLoc;
}
