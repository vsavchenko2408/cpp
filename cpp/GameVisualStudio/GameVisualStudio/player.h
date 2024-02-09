#pragma once

 class player
{
public:
	 player(unsigned int health);
	 unsigned int get_data();
	 void change_health(unsigned int health);
private:
	unsigned int health;
};

