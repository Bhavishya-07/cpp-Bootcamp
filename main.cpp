#include <iostream>
#include <vector>
#include <memory>
#include <string>

class Team{};

class Coach{
    public:
    std::string coach_name;
    std::weak_ptr<Team> team_ptr;

    Coach(std::string n) : coach_name(n) {}
    ~Coach(){
        std::cout << "Coach Deleted!\n";
    }
};

class Team{
    public:
    std::string team_name;
    std::shared_ptr<Coach> coach_ptr;

    Team(std::string tn) : team_name(tn) {}
    ~Team(){
        std::cout << "Team deleted!\n";
    }
};

int main(){
    {
        auto team = std::make_shared<Team>("X-Men");
        auto coach = std::make_shared<Coach>("Professor X");

        team->coach_ptr = coach;
        coach->team_ptr = team;

        if (auto coach_tp = coach->team_ptr.lock()){
            std::cout << coach_tp->team_name << " has the Coach now!\n";
        }

    }

    std::cout << "--- Scope Ended ---\n";

    return 0;

}