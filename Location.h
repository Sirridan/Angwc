#ifndef LOCATION_H
#define LOCATION_H

#include "types.h"

enum direction_t
{
	DIR_NONE = 0,
	DIR_NORTH,
	DIR_SOUTH,
	DIR_EAST,
	DIR_WEST,
	DIR_NORTHEAST,
	DIR_NORTHWEST,
	DIR_SOUTHEAST,
	DIR_SOUTHWEST,
	DIR_UP,
	DIR_DOWN,
};


class Location
{
	int x, y;
public:
	Location();
	~Location();
	void set_x(int value) { x = value; }
	int  get_x() { return x; }
	void set_y(int value) { y = value; }
	int get_y() { return y; }

	bool move(direction_t dir);
};

#endif
