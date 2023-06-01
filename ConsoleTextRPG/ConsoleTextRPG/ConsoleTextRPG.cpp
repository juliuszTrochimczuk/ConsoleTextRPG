#include <iostream>
#include <string>
#include "Foe.h"

using namespace std;

int main()
{
    cout << "Hello World!\n";
    Foe wolf = Foe("Wolf", 10);
    wolf.DrawAction();
    wolf.TakeDamage(20);
}