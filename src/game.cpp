#include "game.h"
#include <curses.h>

Game::Game(WINDOW* win) {
	//ctor
	window = win;
}

void Game::GameLoop() {
	running = true;
	getmaxyx(stdscr, oldRows, oldCols);

	while(running) {
			//check for window resize
			getmaxyx(stdscr, rows, cols);

			if(oldRows != rows || oldCols != cols) {
					update();
				}
			handleInput();
			update();
		}


}

Game::~Game() {
	//dtor
}

void Game::handleInput() {
	int ch = getch();
	switch(ch) {
			case KEY_F(1):
				running=false;
				break;
			case 'q':
				p.addGold(10);
				break;
			case KEY_UP:
				p.movePlayer(-1, 0);
				break;
			case KEY_DOWN:
				p.movePlayer(1, 0);
				break;
			case KEY_RIGHT:
				p.movePlayer(0, 1);
				break;
			case KEY_LEFT:
				p.movePlayer(0, -1);
				break;
			default:
				break;
		}
}
void Game::update() {
	clear();
	getmaxyx(stdscr, rows, cols);
	drawMapArea(rows, cols);
	drawStatsArea(rows, cols);
	refresh();
}
void Game::drawMapArea(int rows, int cols) {
	mvprintw(p.getY(), p.getX(), "@");
}

void Game::drawStatsArea(int rows, int cols) {
	for(int x = 0; x < cols; x++) {
			init_pair(1, COLOR_BLACK, COLOR_RED);
			attron(COLOR_PAIR(1));
			mvprintw(rows - 4, x,"#");
			attroff(COLOR_PAIR(1));
			mvprintw(rows -3, 0, "HP:%d", p.Gethealth());
			mvprintw(rows -2, 0, "MP:%d", p.Getmana());
			mvprintw(rows -3, 8, "GP:%d", p.getGold());
			mvprintw(rows -2, 8, "AC:%d", p.Getarmor());
			mvprintw(rows -3, 16, "AM:%d", p.ammoLeft());
			mvprintw(rows -2, 16, "XP:%d", p.getXp());
			mvprintw(rows -3, 24, "LV:%d", p.getLevel());

			//delete these later
			mvprintw(rows -3, 32, "X:%d",  p.getX());
			mvprintw(rows -2, 32, "Y:%d", p.getY());
		}
}
