#ifndef PLAYER_H
#define PLAYER_H

#include "../include/unit.h"

class player : public Unit{
	public:
		player();

		void movePlayer(int y, int x);
		void addGold(int goldAmt);

		virtual ~player();
	protected:
	private:
};

#endif // PLAYER_H
