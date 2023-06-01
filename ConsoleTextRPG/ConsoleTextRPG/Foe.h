#include <iostream>
#include "Character.h"

using namespace std;

#pragma once
class Foe : public Character
{
public:
	Foe(string _name);
	void SayHey();
};

