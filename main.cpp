#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
#include<vector>

class HeroStats {
public:
    int level;
    std::string tier;

    HeroStats (int level, std::string tier){
        this -> level = level;
        this -> tier = tier     ;
    }
};

int main() {
    std::unordered_map<std::string, HeroStats> game_database = {
        {"Thor", HeroStats{80, "T4"}},
        {"Strom", HeroStats{80, "T4"}}
    };

    for (const auto& [name, stats] : game_database) {
        std::cout << name << " at level " << stats.level << " and " << stats.tier << "\n";
    }
}

