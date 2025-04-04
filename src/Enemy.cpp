#include "../include/Enemy.h"


Enemy::Enemy(std::string name, int health, int damage, int xp)
{
    this->_name = name;
    this->_health = health;
    this->_damage = damage;
    this->_xp = xp;
}

void Enemy::getDamage(Player *player)
{
    player->takeDamage(this->_damage);
}

void Enemy::decreaseHealth(int damage)
{
    this->_health -= damage;
}

std::string Enemy::getName()
{
    return this->_name;
}

int Enemy::getHealth()
{
    return this->_health;
}