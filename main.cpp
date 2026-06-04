#include <iostream>

int main() {
    int playerHP;

    std::cout  << "Enter player's HP: ";
    std::cin >> playerHP;

    if (playerHP <= 0){
        std::cout << "Game Over!" << std::endl;
    }
    
    else if (playerHP == 100){
        std::cout << "Full HP! Ready to blast!" << std::endl;
    }
    else if (playerHP >= 80){
        std::cout << "Health is stable!" << std::endl;
    }

    else if (playerHP >= 40){
        std::cout << "Decent HP, but be carefull." << std::endl;
    }

    else{
        std::cout << "Warning: Low Health! Heal up!" << std::endl;
    }
    
    return 0;
}