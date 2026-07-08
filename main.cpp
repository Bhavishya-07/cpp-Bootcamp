#include <iostream>
#include <string>
#include <vector>

class Gear {
public:
    std::string name;
    int level;

    Gear(std::string n, int l) : name(n), level(l) {}

    // 1. THE VIRTUAL DESTRUCTOR
    // Essential for memory safety! It ensures that when we delete a derived object 
    // through a Gear*, the child's destructor runs first, preventing massive leaks.
    virtual ~Gear() {
        std::cout << "Cleaning up base Gear: " << name << "\n";
    }

    // 2. THE VIRTUAL FUNCTION
    // Tells the compiler: "If a sub-class has its own version of this function, 
    // execute theirs instead of mine at runtime."
    virtual void PrintStats() {
        std::cout << name << " (Lvl " << level << ")\n";
    }
};

class Weapon : public Gear {
public:
    int damage;

    // Constructor chains into Gear's constructor
    Weapon(std::string n, int l, int dmg) : Gear(n, l), damage(dmg) {}

    ~Weapon() override {
        std::cout << "Cleaning up Weapon-specific variables\n";
    }

    // Custom implementation for weapons
    void PrintStats() override {
        std::cout << "⚔️ Weapon: " << name << " | Lvl: " << level << " | Damage: " << damage << "\n";
    }
};

class Armor : public Gear {
public:
    int defence;

    
    Armor(std::string n, int l, int def) : Gear(n, l), defence(def) {}

    ~Armor() override {
        std::cout << "Cleaning up Armor-specific variables\n";
    }

    void PrintStats() override {
        std::cout << "🛡️ Defence: " << name << " | Lvl: " << level << " | Damage: " << defence << "\n";
    }
};

int main(){
    std::vector<Gear*> inventory;
    inventory.reserve(2);
    inventory.push_back(new Weapon("Mjolnir", 80, 500));
    inventory.push_back(new Armor("Uru Breastplate", 80, 750));
    
    for (Gear* c : inventory){
        c -> PrintStats();
    }

    for (Gear* c : inventory){
        delete c;
    }


}