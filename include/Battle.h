#ifndef BATTLE_H
#define BATTLE_H

#include "Player.h"
#include "Enemy.h"
#include <ncurses.h>

class Battle
{
    private:
        Player *_player;
        Enemy *_enemy;
    public:
        Battle(Player *player, Enemy *enemy);
        void render();
};

#endif