#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
#include<vector>

class GameCharacter{
    public:
    std::string name;
    int health;

    GameCharacter(std::string name,
    int health){
        this -> name = name;
        this-> health = health;

    }

};

int main(){
    GameCharacter hero ("Thor", 100);
    GameCharacter* character_ptr =nullptr;

    character_ptr = &hero;

    character_ptr -> health = 80;

    std::cout << hero.name << " has current health: " << hero.health << "\n";

    return 0;
}