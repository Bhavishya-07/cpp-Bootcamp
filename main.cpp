#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>

class Player{
    int health;
    int score;
    

public:

    Player(int h = 100, int s = 0) : health(h), score(s) {}

    void takeDamageandFight(int damage, int p_damage){
        health -= damage;
        score += p_damage;

        if (health <= 0){
            health = 0;
        }
        
        std::cout << "HIT! " << p_damage << " points! Current health = " << health << "\n";
    }

    bool isAlive(){
        if (health <= 0){
            std::cout << "Game Over! " << "Final Score: " << score << "\n";
            return false;
        }
        return true;
    }

};

int main(){

    Player Thor(80, 0);
    bool a = true;
    while (a == true){
        Thor.takeDamageandFight(15, 50);
        a = Thor.isAlive();
    }

    return 0;
}