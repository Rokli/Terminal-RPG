#include <ncurses.h>
#include "include/World.h"

int main() {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);  

    World *world = new World();

    Player *player = new Player("Hero",100,1);
    world->_player = player;

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
                
                break;
            case 's':
                break;
            case 'a':
                break;
            case 'd':
                break;
        }

        refresh();  
    }

    endwin();
    return 0;
}