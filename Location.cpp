#include "defines.h"
#include "Location.h"

Location::Location()
{
	x = 0;
	y = 0;
}

Location::~Location()
{
}

bool Location::move(direction_t dir)
{
	int old_x = x;
	int old_y = y;
	switch(dir)
	{
		case DIR_NORTH:
			y--;
			break;
		case DIR_SOUTH:
			y++;
			break;
		case DIR_EAST:
			x++;
			break;
		case DIR_WEST:
			x--;
			break;
		case DIR_NORTHEAST:
			y--; x++;
			break;
		case DIR_NORTHWEST:
			y--; x--;
			break;
		case DIR_SOUTHEAST:
			y++; x++;
			break;
		case DIR_SOUTHWEST:
			y++; x--;
			break;
	}
	if(x < 0 || y < 0 || x > MAX_X || y > MAX_Y)
	{
		x = old_x;
		y = old_y;
		return false;
	}
	return true;
}
