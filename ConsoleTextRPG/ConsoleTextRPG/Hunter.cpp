#include "Hunter.h"

string Hunter::ActionCommunicate()
{
    return "1 - Regular shot; 2 - Percise Shot";
}

int Hunter::BasicAttack()
{
    return Attack(8, 18);
}

int Hunter::PowerAttack()
{
    return Attack(10, 14);
}

Hunter::Hunter()
{
    SetupHealth(110);
    defensiveFactor = 62;
}
