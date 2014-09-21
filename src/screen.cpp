#include "screen.h"
#include <curses.h>

screen::screen(WINDOW* win)
{
	//ctor
	this->win = win;
}

screen::~screen()
{
	//dtor
}
