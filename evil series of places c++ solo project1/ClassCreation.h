#include <iostream>
#include <string>
#include <cstdio>

std::string classSelection;
std::string selectedClass;
std::string rangerClassSelection = "Your class in now a Ranger\n\n";
std::string warriorClassSelection = "Your class is now a warrior\n\n";
std::string mageClassSelection = "Your class is now a mage\n\n";

//function to print the info menu
void PrintInfo()
{
    std::cout << "Ranger: A cunning class based on range and dexterity. You will recieve a shortbow/50 arrows, a dagger as well as leather armour at the beggining of the game\n\n";
    std::cout << "Warrior: A class of strength and force. You will recieve a broadsword and kiteshield as well as a full set of iron armour\n\n";
    std::cout << "Mage: A class of intelligence and arcane power. You will recieve a staff and 3 base spells as well as full mages robes\n";
    std::cout << "Base spells: fireball - deals damage to enemies .. as a glorious ball of fire. frost catch - freeze and enemy in his place for x seconds ";
    std::cout << "rock skin - increase armour and defensive stats\n\n";
    std::cout << "Please now select a class from a. b. or c. type letter of choice\n\n";

    std::cin >> classSelection; // give the user the chance to enter their class selection
}

void ClassCreation()
{
    std::cin >> classSelection; // user can input class selection here and skip the infomenu

    while (classSelection == "i") // while loop to handle user input of a class after the info menu
    {
        PrintInfo();
    }

    if (classSelection == "a")
    {
        selectedClass = rangerClassSelection; // sets which class was selected  by the player
        std::cout << selectedClass; // outputs a message saying which class the player selected
    }
    else if (classSelection == "b")
    {
        selectedClass = warriorClassSelection; // output testing still needed
        std::cout << selectedClass;
    }
    else if (classSelection == "c")
    {
        selectedClass = mageClassSelection; // output testing still needed
        std::cout << selectedClass;
    }
}
