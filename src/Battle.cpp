#include "../include/Battle.h"


Battle::Battle(Player *player, Enemy *enemy)
{
    this->_player = player;
    this->_enemy = enemy;
}


void Battle::render()
{
    clear();
    bool battle = true;
    while(battle)
    {
        mvprintw(0, 0, "Battle: %s VS %s", _player->getName().c_str(), _enemy->getName().c_str());

        
        mvprintw(1, 0, "Your HP : %d", _player->getHealth());
        mvprintw(2, 0, "Enemy HP: %d", _enemy->getHealth());

        
        mvprintw(4, 0, "-----------------------------");
        mvprintw(5, 0, "| [F] Attack     [ESC] Exit |");
        mvprintw(6, 0, "-----------------------------");
        
        refresh();
        int ch = getch();
        switch (ch)
        {
        case 'q':
            battle = false;
            break;
        }
    }   
}