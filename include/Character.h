#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
    public:
        Character(std::string name, int health, int level);
        virtual void takeDamage(int damage);
        virtual void levelUp(int level);
        virtual std::string getName();
        virtual int getHealth();
        virtual int getXP();
        virtual int getDamage();
        virtual int getLevel();
    private:
        std::string _name;
        int _health;
        int _xp;
        int _level;
        int _damage;
};

#endif
