#include <iostream>
#include <string>
#include "Foe.h"
#include "Warrior.h"
#include "Player.h"

using namespace std;

void FightSystem(Player& playerRef, Foe& oponentRef)
{
    while (playerRef.isDead != true && oponentRef.isDead != true)
    {
        int damageToOponent = playerRef.MakeAction();
        oponentRef.TakeDamage(damageToOponent);
        if (oponentRef.isDead == true)
        {
            cout << "Here comes the award :D\n";
            break;
        }
        int damageToPlayer = oponentRef.DrawAction();
        playerRef.TakeDamage(damageToPlayer);
    }
}

int main()
{
    cout << "Hey Player! Welcome in magical world of Rivia. It's high fanatsy world with planty of stories, creaters and treasuer. But firstly you need to choose your character.\n";
    Warrior playerObject = Warrior();
    Foe wolf = Foe("Wolf", 10, 60);
    cout << "And here is your first creaters to kill. You encounter: " + wolf.name << endl;
    FightSystem(playerObject, wolf);
}