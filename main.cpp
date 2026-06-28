#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, int> gear_inventory;

    gear_inventory["CTP of Energy"] = 4;
    gear_inventory["Mighty CTP"] = 1;
    gear_inventory["Brilliant CTP"] = 0;

    std::string audit1 = "CTP of Energy";
    std::string audit2 = "Brilliant CTP";

    std::string* current_audit;

    current_audit = &audit1;

    std::cout << *current_audit << " is in the slot " << gear_inventory[*current_audit] << std::endl;

    current_audit = &audit2;

    std::cout << *current_audit << " is in the slot " << gear_inventory[*current_audit] << std::endl;

    return 0;
}