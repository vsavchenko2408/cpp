#include <iostream>
#include "player.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	player player_one(100);
	cout << player_one.get_data() << endl;



	return 0;
}