#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include <ncurses.h>
#include "Player.h"
#include "Enemy.h"

class World{
    private:
        std::vector<std::vector<char>> _mapVillage;
        int _dx,_dy,_x,_y;
        bool canMove(int dy,int dx);
    public:
        World();
        void render();
        Enemy *_enemy;

		int getX();
		int getY();

        void decreaseX();
		void decreaseY();

		void increaseX();
		void increaseY();

        void setX(int x);
        void setY(int y);
};

#endif