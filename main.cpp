#include <iostream>

int main() {
    int menuChoice;

    std::cout << "1. Thor\n2. Iron Man\n3. Storm\nSelect your hero number: ";
    std::cin >> menuChoice;

    switch (menuChoice) {
        case 1: 
            std::cout << "Thor deployed! Bring the thunder!" << std::endl;
            break;
        case 2: 
            std::cout << "Iron Man deployed! Repulsors charged!" << std::endl;
            break;
        case 3:
            std::cout << "Storm deployed! Power of the elements!" << std::endl;

        default:
            std::cout << "Invalid selection! Team empty." << std::endl;
        
    }

    return 0;
}