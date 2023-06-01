#include "Foe.h"

Foe::Foe(string _name)
{
	name = _name;
}

void Foe::SayHey()
{
	cout << name + "\n";
}
