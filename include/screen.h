#ifndef SCREEN_H
#define SCREEN_H
#include <curses.h>


class screen
{
	public:
		screen(WINDOW* win);
		virtual ~screen();
	protected:
	private:
		WINDOW* win;;
};

#endif // SCREEN_H
