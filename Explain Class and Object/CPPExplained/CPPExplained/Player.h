#pragma once
#include <string>
class Player
{
private: // able to access the properties only from this class
	std::string name; // the namespace that string is defined in
	int health;
	int mana;
	int level;

public:
	Player(std::string name);
	void ShowName();
};

