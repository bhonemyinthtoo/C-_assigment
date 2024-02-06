#include <iostream>

enum class MyanmarSeason {
    WINTER,
    SUMMER,
    RAINY
};

void Season (MyanmarSeason chosenSeason) {
    switch (chosenSeason)
    {
    case MyanmarSeason::WINTER:
        std::cout << "Winter months: late October to mid February"<< std::endl;
        break;
    
    case MyanmarSeason::SUMMER:
        std::cout << "Summer months: mid February to mid May"<< std::endl;
        break;

    case MyanmarSeason::RAINY:
        std::cout << "Rainy months: mid May to late October"<< std::endl;
        break;

    }
}

int main () {
    MyanmarSeason chosenSeason;

    std::cout << "Choose a season (1: Winter, 2: Summer, 3: Rainy): ";
    int userInput;
    std::cin >> userInput;

    switch (userInput)
    {
    case 1:
       // chosenSeason = MyanmarSeason::WINTER;
      Season (MyanmarSeason::WINTER);
        break;

    case 2:
       Season (MyanmarSeason::SUMMER);
        break;

    case 3:
        Season (MyanmarSeason::RAINY);
        break;

    default:
        std::cerr << "Invalid choice." << std::endl;
        break;
    }


return 0;
}