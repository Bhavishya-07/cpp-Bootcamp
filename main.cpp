#include <iostream>

int main() {
    char teamTier;
    int characterCount;
    float avgAttack;

    std::cout << "Enter Team Tier Letter: " << std::endl;
    std::cin >> teamTier;

    std::cout << "Enter Number of Active Characters: " << std::endl;
    std::cin >> characterCount;

    std::cout << "Enter Average Character Attack: " << std::endl;
    std::cin >> avgAttack;

    std::cout << "Squad" << teamTier << "loaded." << "Total Squad Potential: " << characterCount * avgAttack << std::endl;

    return 0;
}