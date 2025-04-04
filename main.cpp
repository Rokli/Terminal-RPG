#include <ncurses.h>
#include "include/World.h"
#include "include/Enemy.h"
#include "include/Battle.h"

int main() {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);  

    World *world = new World();

    Player *player = new Player("Hero",100,1);
    Enemy *enemy = new Enemy("Goblin",100,1,1);
    Battle *battle = new Battle(player,enemy);
    world->setX(1);
    world->setY(8);
    bool running = true;


    while (running) {
        clear();

        mvprintw(0, 0, "=== Gopnik Village ===");
        mvprintw(1, 0, "Move - WASD, Q - exit");
        mvprintw(2, 0, "\n");
        world->render();
        
        int ch = getch();
        switch (ch) {
            case 'q':
                running = false;
                break;
            case 'w':
                world->decreaseY();
                break;
            case 's':
                world->increaseY();
                break;
            case 'a':
                world->decreaseX();
                break;
            case 'd':
                world->increaseX();
                break;
            case 'b':
                battle->render();
                break;
        }

        refresh();  
    }

    endwin();
    return 0;
}