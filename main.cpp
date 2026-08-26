#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>

class Character{
    int health;
    int mana;

public:

    Character(int h, int m) : health(h), mana(m) {}

    void applyHealthPotion(int*hpBoost){

        if (hpBoost != nullptr){
            health += *hpBoost;
            *hpBoost = 0;
        }

        else{
            std::cout << "No health potion applied!\n";
        }
    }

    void applyManaPotion(int& manaBoost){
        
        if (manaBoost != 0){
            mana += manaBoost;
            manaBoost = 0;
        }

        else{
            std::cout << "No mana applied!\n";
        }
    }

    void printStats() const{
        std::cout << "Current Health: " << health << "\nMana Power: " << mana << "\n";
    }
};

int main(){

    Character Gwen(50, 30);

    int healthPot = 40;
    int manaPot = 25;

    Gwen.applyHealthPotion(&healthPot);
    Gwen.applyManaPotion(manaPot);

    Gwen.printStats();
}
