#include <iostream>
#include <string>
#include "Foe.h"
#include "Warrior.h"
#include "Player.h"
#include "GameController.h"

using namespace std;

void RewardingPlayer(Player& playerRef)
{
    int drawReward = GameController::GenerateNumber(1, 2);
    if (drawReward == 1)
    {
        int healingAmount = GameController::GenerateNumber(10, 25);
        cout << "Near the corpse you find the flask of life energy. It restoring " + to_string(healingAmount) + " of your health\n";
        playerRef.Heal(healingAmount);
        cout << "Now your healt amount is: " + to_string(playerRef.GetHealth()) << endl;
    }
    else if (drawReward == 2)
    {
        int goldLooted = GameController::GenerateNumber(5, 15);
        cout << "Near the corpse you find the pouch of gold. You decide to take it. Owner dosen't need it now anyway. You recive " + to_string(goldLooted) + " gold\n";
        playerRef.Loot(goldLooted);
        cout << "Now you have " + to_string(playerRef.GetGold()) + " gold\n";
    }
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