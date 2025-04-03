#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include <ncurses.h>
#include <Player.h>

class World{
    private:
        std::vector<std::vector<char>> _mapVillage;
        int dx;
        int dy;       
    public:
        World();
        void render();
        Player *_player; 
};

#endif