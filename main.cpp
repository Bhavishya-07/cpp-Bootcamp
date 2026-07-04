#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
#include<vector>

int main() {
    std::map<std::string, int> power_levels{
        {"Thor", 95},
        {"Storm", 145},
        {"Mephisto", 905}
    };

    int* current_power = nullptr;

    if(power_levels.count("Thor") == 1){
        current_power = &power_levels["Thor"];

        std::cout << "Thor's attack rating: " << *current_power << "\n";
    }

    return 0;
}    


