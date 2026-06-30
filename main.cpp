#include <iostream>
#include <string>

class Character{
    public:
    
    std::string name;
    std::string tier;
    int level;

    Character(std::string name, std::string tier, int level){
        
        this -> name = name;
        this -> tier = tier;
        this -> level = level;

    }

     void display(){
            std::cout << name << ": " << tier << "; level = " << level << "\n";
    }

};

int main() {

    Character hero("Thor", "Tier 4", 80);
    Character hero2("Knull", "Tier 3", 70);

    hero.display();
    hero2.display();

    return 0;
}