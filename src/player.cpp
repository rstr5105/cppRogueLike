#include "../include/unit.h"
#include "player.h"


player::player()
{
	symbol = "@";
	level = 1;
	gold = 100;

}

player::~player()
{
	//dtor
}

void player::movePlayer(int y, int x){
	posX += x;
	posY += y;
}

void player::addGold(int goldAmt){
	gold+=goldAmt;
}
