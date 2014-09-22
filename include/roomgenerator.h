#ifndef ROOMGENERATOR_H
#define ROOMGENERATOR_H

#include <vector>

#include "enemy.h"
#include "room.h"

class RoomGenerator
{
	public:
		RoomGenerator();
		virtual ~RoomGenerator();

	protected:
	private:
		Room room;
};

#endif // ROOMGENERATOR_H
