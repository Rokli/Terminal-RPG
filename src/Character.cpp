#include "../include/Character.h"

Character::Character(std::string name, int health, int level)
{
    this->_name = name;
    this->_health = health;
    this->_level = level;
}

void Character::takeDamage(int damage)
{
    this->_health -= damage;
}

void Character::levelUp(int level)
{
    this->_level += level;
}

std::string Character::getName()
{
    return this->_name;
}

int Character::getHealth()
{
    return this->_health;
} 

int Character::getXP()
{
    return this->_xp;
} 

int Character::getDamage()
{
    return this->_damage;
}   

int Character::getLevel()
{
    return this->_level;
}