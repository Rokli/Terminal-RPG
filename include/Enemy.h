#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "Player.h"
#include "Character.h"

class Enemy : public Character
{
    public:
        using Character::Character;
};

#endif 