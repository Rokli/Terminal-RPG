#include "../include/World.h"


void World::render() 
{
    for(int y = 0; y < _mapVillage.size();y++)
    {
        for(int x = 0; x < _mapVillage[y].size(); x++)
        {
            if(getX() == x && getY() == y)
            {
                printw("@ ");
            }
            else
            {
                printw("%c ", _mapVillage[y][x]);
            }
        }
        printw("\n");
    }
    
}

World::World()
{
    _mapVillage = 
    {
        {'#','#','#','#','#','#','#','#','#','#'},
        {'#','.','.','.','.','.','.','.','.','#'},
        {'#','.','#','#','.','#','.','#','.','#'},
        {'#','.','.','.','.','#','.','#','.','#'},
        {'#','#','#','#','.','#','.','#','.','#'},
        {'#','.','.','.','.','.','.','.','.','#'},
        {'#','.','#','#','#','#','#','#','.','#'},
        {'#','.','.','.','.','.','.','#','.','#'},
        {'#','.','#','#','#','#','.','#','.','#'},
        {'#','#','#','#','#','#','#','#','#','#'}
    };
}

int World::getX()
{
    return this->_x;
}

int World::getY()
{
    return this->_y;
}

void World::decreaseX()
{
    if(canMove(_y,_x-1)){
        this->_x -= 1;
    }
}

void World::decreaseY()
{
    if(canMove(_y-1,_x)){
        this->_y -= 1;
    }
    
}

void World::increaseX()
{
    if(canMove(_y,_x+1)){
        this->_x += 1;
    }
    
}

void World::increaseY()
{
    if(canMove(_y+1,_x)){
        this->_y +=1;
    }
}

void World::setX(int x){
    _x = x;
}

void World::setY(int y){
    _y = y;
}

bool World::canMove(int dy,int dx)
{
    return _mapVillage[dy][dx] != '#';
};
