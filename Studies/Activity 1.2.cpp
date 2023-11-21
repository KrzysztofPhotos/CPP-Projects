// CPP Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int speed_range;
    float speed = 123.3;

	if (speed <= 1)
	{
		speed_range = 1;
	}
	else if ((speed > 1) && (speed < 35.0))
	{
		speed_range = 2;
	}
	else if ((speed > 35) && (speed <= 100))
	{
		speed_range = 3;
	}
	else if (speed > 100)
	{
		speed_range = 4;
	}
	else
	{
		speed_range = 0;
	}

	if (speed_range == 1)
	{
		cout << "Playing blues" << endl;
	}
	else if (speed_range == 2)
	{
		cout << "Playing reggae" << endl;
	}
	else if (speed_range == 3)
	{
		cout << "Playing classic rock" << endl;
	}
	else if (speed_range == 4) {
		cout << "Playing metal" << endl;
	}
	else if (speed_range == 0)
	{
		cout << "Playing white noise" << endl;
	}



}
