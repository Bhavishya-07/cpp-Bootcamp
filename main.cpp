#include <iostream>
#include <unordered_map>
#include <string>

struct CharacterData {
    int level;
    std::string tier;
};

void LogUpgrades() {
    std::unordered_map<std::string, CharacterData> t4_roster;
    t4_roster.reserve(3); // 1. Prevent bucket rehashing
    
    // 2. Construct elements directly in-place (no copies, no default construction)
    t4_roster.try_emplace("Thor", 80, "Tier-4");
    t4_roster.try_emplace("Iron Man", 80, "Tier-4");
    t4_roster.try_emplace("Storm", 80, "Tier-4");
}