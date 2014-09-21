#ifndef GAME_H
#define GAME_H

#include <curses.h>
#include "unit.h"
#include "player.h"


class Game
{
	public:
		Game(WINDOW* win);
		void GameLoop();
		virtual ~Game();
	protected:
	private:
		int rows;
		int cols;
		int oldRows;
		int oldCols;
		int gold;
		player p;
		WINDOW* window;

		void handleInput();
		void update();
		void drawMapArea(int rows, int cols);
		void drawStatsArea(int rows, int cols);
		bool running;
};

#endif // GAME_H
