#include "Player.h"
#include <iostream>

void Player::UpdateID()
{
	id = name + "_ " + std::to_string(level);
}

Player::Player(std::string name)
{
	this->name = name;
	level = 15;
	UpdateID();
	
}

void Player::ShowName()
{
	std::cout << "Player Name: " << name << std::endl;
}

void Player::SetLevel(int level)
{
	this->level = level;
	UpdateID();
}

int Player::GetLevel()
{
	return level;
}

int Player::GetSpeed() {
	return 10 + level;
}

 