
//Standard includes
#include <iostream>
#include <curses.h>
#include <string>
//Local includes
#include <../include/main.h>
#include <game.h>




using namespace std;

int main()
{
	init();
	Game* game = new Game(stdscr);
	game->GameLoop();
	getch();
	exit();
	return 0;
}


void init(){
	initscr();
	start_color();
	keypad(stdscr, TRUE);
	noecho();
	cbreak();


}

void exit(){
	endwin();
}
