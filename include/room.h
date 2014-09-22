#ifndef ROOM_H
#define ROOM_H
#include <vector>

#include "enemy.h"

class Room
{
	public:
		Room();
		virtual ~Room();
		std::vector<enemy> Getenemies() { return enemies; }
		void Setenemies(std::vector<enemy> val) { enemies = val; }
	protected:
	private:
		std::vector<enemy> enemies;
};

#endif // ROOM_H
