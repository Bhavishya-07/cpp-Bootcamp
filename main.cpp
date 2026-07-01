#include <iostream>
#include <string>
#include <vector>

class Skill {

    public:
    std::string name;
    int damage_multiplier;

    Skill(std::string name,
    int damage_multiplier){
        this -> name = name;
        this -> damage_multiplier = damage_multiplier;
    }

    void boostSkill(int damage_multiplier){

        this -> damage_multiplier += damage_multiplier;
        std::cout << name << ": Skill upgraded to " << this->damage_multiplier << "\n";
    
    }


};

int main(){

    Skill hero("God of Thunder", 150);

    hero.boostSkill(50);

}