#include <iostream>
#include <string>

void ClassSelection()
{

}

int main()
{
    std::string Name;
    std::string playerClass;

    std::cout << "Welcome to the evil series of places by Reece Mcintyre\n\n";

    // name creation and output
    std::cout << "Time to create your character please enter a name\n\n";
    std::cin >> Name;
    std::cout << "\n";
    std::cout << "Your name is " << Name << "\n\n";

    // class selection or class info 
    std::cout << "Please select a class from a. Ranger b. Warrior c. Mage\n";
    std::cout << "(type letter of selection)\n";
    std::cout << "If you want info on the classes type i\n\n";

    std::cin >> playerClass;

    std::cout << "\n";

    // check to see which class is selected and output a response
    // also check to see if the info section was selected and output class info

    if (playerClass == "a")
    {
        std::cout << "Your class in now a Ranger\n\n";
    }
    else if (playerClass == "b")
    {
        std::cout << "Your class is now a Warrior\n\n";
    }
    else if (playerClass == "c")
    {
        std::cout << "Your class is now a Mage\n\n";
    }
    else if (playerClass == "i")
    {
        std::cout << "Ranger: A cunning class based on range and dexterity. You will recieve a shortbow/50 arrows, a dagger as well as leather armour at the beggining of the game\n\n";
        std::cout << "Warrior: A class of strength and force. You will recieve a broadsword and kiteshield as well as a full set of iron armour\n\n";
        std::cout << "Mage: A class of intelligence and arcane power. You will recieve a staff and 3 base spells as well as full mages robes\n";
        std::cout << "Base spells: fireball - deals damage to enemies .. as a glorious ball of fire. frost catch - freeze and enemy in his place for x seconds ";
        std::cout << "rock skin - increase armour and defensive stats\n\n";
        std::cout << "Please now select a class from a. b. or c. type letter of choice\n\n";
        std::cin >> playerClass;
    }

    system("pause");
}