#include <iostream>
#include <vector>
#include <string>

class Character {
public:
    std::string name;
    Character(std::string n) : name(n) {}
};

void AssembleRoster() {
    // A vector that holds POINTERS to dynamic characters
    std::vector<Character*> roster;

    // Imagine we are adding 4 specific heroes one by one
    roster.push_back(new Character("Thor"));
    roster.push_back(new Character("Iron Man"));
    roster.push_back(new Character("Storm"));
    roster.push_back(new Character("Sentry"));

    // We print the team out
    for (size_t i = 0; i < roster.size(); i++) {
        std::cout << "Hero: " << roster[i]->name << "\n";
    }

    // Problem 1: This function ends right here. 
    // Think about what happens to the characters allocated with `new`!
}