#ifndef CREATURE_H
#define CREATURE_H

#include "types.h"
#include "Location.h"
//class Inventory;

class Creature
{
	Location *pLoc;
//	Inventory *pInventory;
public:
	Creature();
	~Creature();
	Location   *location()  { return pLoc; }
//	Inventory  *inventory() { return pInventory; }

	/* need some way of calculating things like AC, virtual method for sure.*/
};

#endif
