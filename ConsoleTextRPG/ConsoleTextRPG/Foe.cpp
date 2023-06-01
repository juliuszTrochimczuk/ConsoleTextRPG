#include "Foe.h"
#include <cstdlib>

Foe::Foe(string _name, int _health)
{
	name = _name;
	health = _health;
}

void Foe::Death()
{
	cout << "I've died :(";
}

void Foe::DrawAction()
{
	srand(time(0));
	int randomNumber = rand();
	int actionToPerform = randomNumber % 3;
	if (actionToPerform == 0)
	{
		int damage = Attack(10, 15);
		cout << "Basic Attack: " + to_string(damage) + "\n";
	}
	else if (actionToPerform == 1)
	{
		int damage = Attack(8, 25);
		cout << "Power Attack: " + to_string(damage) + "\n";
	}
	else if (actionToPerform == 2)
	{
		cout << "Block\n";
	}
}
