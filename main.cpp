#include <iostream>
#include<string>
#include<vector>

class TeamRoaster{
public: 
    std::vector<std::string> members;

    void addHero(std::string name){
        members.emplace_back(name);
    }
};

void printRoaster(const TeamRoaster& team_object) {
    
    for (const std::string& c : team_object.members) { 
        std::cout << c << "\n";
    }
}

int main(){

    TeamRoaster you;

    you.addHero("Thor");
    you.addHero("Iron Man");
    you.addHero("Storm");

    printRoaster(you);

}