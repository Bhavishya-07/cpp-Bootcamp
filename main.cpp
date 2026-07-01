#include <iostream>
#include <string>
#include <vector>
class UniformVault {

    public:
    std::string name;
    std::vector<std::string> uniforms;

    UniformVault(std::string name, std::vector<std::string> uniforms){
        this -> name = name;
        this -> uniforms = uniforms;
    }

    void addUniform(std::string uni_name){
        uniforms.emplace_back(uni_name);
    }

    void equipLatest(){
        std::string f = uniforms.back();

        if (f != ""){
        std::cout << "Equipped " << f << " for " << name << ". \n";
        }

        else{
            std::cout << "No uniforms available! \n";
        }
    }
};

int main(){

    UniformVault hero("Colossus", {});

    hero.addUniform("Phoenix Five");
    hero.addUniform("Hellfire Gala");

    hero.equipLatest();
}