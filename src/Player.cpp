#include "../include/Player.h"


Player::Player(std::string name, int health, int level)
{
    this->_name =  name;
    this->_health = health;
    this->_level = level;
}
void Player::levelUp()
{

}
void Player::takeDamage(int damage)
{

}
void Player::heal(int amount)
{

}

std::string Player::getName()
{
    return _name;
}

int Player::getHealth()
{
    return this->_health;
}