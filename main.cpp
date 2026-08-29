#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>

class Entity{
    protected:
    std::string name;

    public:
    Entity(std::string n) : name(n){} 

    virtual void update() = 0;

    virtual void render() const {
        std::cout << "Rendering Base Entity: " << name << "\n";
    }

    virtual ~Entity(){
        
    }
};

class Player : public Entity {
    private:
    int level;

    public:

    Player(const std::string &n, int l) : Entity(n), level(l) {}

    void update() override {
        std::cout << "[Player] " << name << " updated position.\n";
    }
    void render() const override {
        std::cout << "[Player] Rendering " << name << " (Level " << level << ")\n";
    }

    ~Player(){}
};

class NPC : public Entity{
    private:

    std::string dialouge;

    public:

    NPC(const std::string &n, const std::string &s) : Entity(n), dialouge(s) {}

    void update() override{
        std::cout << "[NPC] " << name << " idle animation.\n";
    }

    void render() const override {
        std::cout << "[NPC] Rendering " << name << " saying: " << dialouge << "\n";
    }
    
    ~NPC(){}
};

int main(){
    std::vector<Entity*> ent;
    ent.push_back(new Player("Thor", 4));
    ent.push_back(new NPC("Phil Coulson", "Hello there!"));

    for (auto e : ent){
        e->update();
        e->render();
    }
    for(auto e : ent) delete e;
    ent.clear();

    return 0;
}