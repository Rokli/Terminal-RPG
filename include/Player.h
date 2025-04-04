#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{
	private:
		std::string _name;
		int _health;
		int _attack;
		int _defense;
		int _xp;
		int _level;
		int x = 1;
		int y = 8;
	public:
		Player(std::string name, int health, int level);
		void levelUp();
		void takeDamage(int damage);
		void heal(int amount);
		std::string getName();
		int getHealth();

};

#endif 
