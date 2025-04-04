#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Character.h"

class Player : public Character
{
	private:
		int x = 1;
		int y = 8;
	public:
		using Character::Character;
};

#endif 
