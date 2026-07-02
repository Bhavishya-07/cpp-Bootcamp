#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
#include<vector>

int main(){
    std::map<std::string, std::string> uniform_catalog;

    uniform_catalog["Iron Man"] = "Model Nil";
    uniform_catalog["Hulk"] = "Titan";

    std::string* active_uniform;

    if (uniform_catalog.count("Iron Man") == 1){
        active_uniform = &uniform_catalog["Iron Man"];
        std::cout << "Active uniform for Iron Man is " << *active_uniform << "\n";
    }

}