# ConsoleTextRPG in C++ (ONGOIN PROJECT)

### Welcome traveler...

In magic land of Rivia. Here is where you will have your epic journey to start. Choose from 3 distinct classes - Warrior, Hunter, Mage. Each have unique attack and twist in gameplay. <br />
Warrior is the most tanky and survival from all. <br />
Hunter can shred throw enemies armor. <br />
Mage can create frost shield to protect him from incoming damage. <br />
Slay beast and monsters, collect gold and discover new world in this exiting game :D <br />

### Some technical information

This game is written in pure C++ (without using any framework) and it runs throw terminal. <br />
I've used the OOP patern to create main backbone character script (Character.cpp). All of other components, such as Player character, oponents, is child of Character.cpp which allows me not to repate the same code over and over (block mechanic, taking damage, etc.). <br />
I've also created the GameController class as a pack of static methods to handle universal things between all coponents in the game. Such as: player inputs (check if player is typing correct choice), random number generator, and getting oponents data from static list of oponents - each oponent is just a struct data which I get from list and them send the data to constructor of Feo class.

### Plans to do

What I don't have now, is the story system. I want to have all my story texts in txt file and then get the right one by it's id. This is high design version of this. Still need to figure out how to implemnent and maybe change some details.
