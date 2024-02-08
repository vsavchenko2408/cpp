#include "player.h"
	player::player(unsigned int health)
	{
		this->health = health;
	}
	unsigned int player::get_data()
	{
		return this->health;
	}
	void player::change_health(unsigned int health)
	{
		this->health = health;
	}


