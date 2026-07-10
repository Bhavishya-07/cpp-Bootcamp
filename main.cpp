#include <iostream>
#include <vector>
#include <memory>
#include <string>

class Weapon {
public:
    std::string weapon_name;

    Weapon(std::string n) : weapon_name(n){}

    ~Weapon(){
        std::cout << "💥 " << weapon_name << " has been destroyed and removed from memory.\n";
    }
};

class Hero {
public:
    std::string hero_name;
    std::shared_ptr<Weapon> equipped_weapon; 
    
    Hero(std::string n, std::shared_ptr<Weapon> w) : hero_name(n), equipped_weapon(w){}
    
    virtual ~Hero(){
        std::cout << "Cleanup base Hero: " << hero_name << "\n";
    }

    virtual void CombatAction() = 0; 
};

class Mage : public Hero {
public:
    
    Mage(std::string n, std::shared_ptr<Weapon> w) : Hero(n, w) {}

    ~Mage() override {
        std::cout << "Cleaning up Mage-specific variables\n";
    }

    void CombatAction() override {
        std::cout << "🔮 Mage " << hero_name << " casts spells using " << equipped_weapon->weapon_name << "!\n";
    }
};

class Warrior : public Hero {
public:
    Warrior(std::string n, std::shared_ptr<Weapon> w) : Hero(n, w) {}

    ~Warrior() override {
        std::cout << "Cleaning up Warrior-specific variables\n";
    }

    void CombatAction() override {
        std::cout << "🪓 Warrior " << hero_name << " swings " << equipped_weapon->weapon_name << " into battle!\n";
    }
};

int main(){

    std::shared_ptr<Weapon> legendary_weapon = std::make_shared<Weapon>("Jarnbjorn");


    std::vector<std::unique_ptr<Hero>> War;
    War.reserve(2);


    War.push_back(std::make_unique<Mage>("Strange", legendary_weapon));
    War.push_back(std::make_unique<Warrior>("Thor", legendary_weapon));


    std::cout << "Weapon reference count: " << legendary_weapon.use_count() << "\n\n";

    for (const auto& c : War){
        c -> CombatAction();
    }

    std::cout << "\n--- Exiting main() ---\n";
    return 0;
}