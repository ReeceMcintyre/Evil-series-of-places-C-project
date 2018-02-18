#include <iostream>
#include <string>
#include "ClassCreation.h"

int main()
{
    std::string Name;

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

    ClassCreation(); // function from ClassCreation.h that contains the class selection options and checks / outputs the info based on the letter selection
    
    system("pause");
}