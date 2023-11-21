// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float speed = 123.3;

	if (speed <= 1.0)
	{
		cout << "Stop" << endl;
	}
	else if ((speed > 1.0) && (speed <= 35.0))
	{
		cout << "Low speed" << endl;
	}
	else if ((speed > 35.0) && (speed <= 100.0))
	{
		cout << "Normal speed" << endl;
	}
	else
	{
		cout << "Fast and furious" << endl;
	}
}
