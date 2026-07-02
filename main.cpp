#include <iostream>
#include <string>
#include <vector>
#include <map>

class AllianceVault{

    public:

    std::map<std::string, int> gold;

    void addGold(std::string alliance_name, int amount){
        gold[alliance_name] += amount;
    }

    void checkGold(std::string alliance_name){
        if (gold.count(alliance_name) == 1){
            std::cout << alliance_name << " has " << gold.at(alliance_name) << " gold. \n";
        }

        else{
            std::cout << "Alliance doesn't exist. \n";
        }
    }
};


int main(){

    AllianceVault coins;
    
    coins.addGold("Avengers", 500);
    coins.checkGold("Avengers");

}