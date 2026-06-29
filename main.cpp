#include <iostream>
#include <string>
#include <map>

void CTPchecker(const std::map<std::string, int> &premium_inventory, const std::string* search);

int main() {
    
    std::map<std::string, int> premium_inventory;

    premium_inventory["Mighty CTP"] = 1;
    premium_inventory["Refined CTP"] = 3;

    std::string target1 = "Mighty CTP";
    std::string target2 = "Refined CTP";

    std::string* search;
    search = &target1;

    CTPchecker(premium_inventory, search);

    std::string seach = "Brilly Rage";
    search = &seach;

    CTPchecker(premium_inventory, search);

    return 0;
}

void CTPchecker(const std::map<std::string, int> &premium_inventory, const std::string* search){
    if (premium_inventory.count(*search) == 1){
        std::cout << premium_inventory.at(*search) << " " << *search << " are available.\n";
    }
    else{
        std::cout << "No such CTP available" << std::endl;
    }
}