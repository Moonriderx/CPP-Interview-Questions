#include "Player.h"
#include <iostream>

Player::Player(std::string name)
{
	this->name = name;
}

void Player::ShowName()
{
	std::cout << "Player Name: " << name << std::endl;
}

