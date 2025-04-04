#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "Player.h"

class Enemy{
    private:
        std::string _name;
        int _health;
        int _xp;
        int _damage;
    public:
        Enemy(std::string name, int health, int damage, int xp);
        void getDamage(Player *Player);
        void decreaseHealth(int damage);
        std::string getName();
        int getHealth();
};

#endif 