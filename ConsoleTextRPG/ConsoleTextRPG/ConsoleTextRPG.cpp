#include <iostream>
#include <string>
#include "Foe.h"
#include "Warrior.h"
#include "Player.h"
#include "GameController.h"

using namespace std;

void RewardingPlayer(Player& playerRef)
{
    cout << playerRef.isDead << endl;
    cout << "Here comes the award :D\n";
    return;
}

void FightSystem(Player& playerRef, string oponentName)
{
    
    Foe oponent = Foe(GameController::GetOponentData(oponentName));
    while (playerRef.isDead != true && oponent.isDead != true)
    {
        int damageToOponent = playerRef.MakeAction();
        oponent.TakeDamage(damageToOponent);
        if (oponent.isDead == true)
        {
            cout << endl;
            RewardingPlayer(playerRef);
            return;
        }
        int damageToPlayer = oponent.DrawAction();
        playerRef.TakeDamage(damageToPlayer);
        cout << endl;
    }
}

int main()
{
   cout << "Hey Player! Welcome in magical world of Rivia. It's high fanatsy world with planty of stories, creaters and treasuer. But firstly you need to choose your character.\n";
   Warrior playerObject = Warrior();
   cout << "And here is your first creaters to kill. You encounter: Wolf\n";
   FightSystem(playerObject, "Wolf");
   cout << "Congratiulations on killing your first beast\n";
}