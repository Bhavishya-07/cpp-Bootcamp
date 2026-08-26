#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>

class Sanitizer{
    std::string input;

public:

    Sanitizer(std::string i) : input(i){}

    std::string sanitize(){
        size_t ph = input.find('#');
        size_t pa = input.find('@');

        if (ph != std::string::npos || pa != std::string::npos) {
            if (ph > pa) {
                input.erase(pa);
            }
            
            else {
             input.erase(ph);
            }
        }

        std::string nosp;

        for (char c : input){
            if (c != ' '){
                nosp.push_back(c);
            }
        }

        if (nosp.size() % 2 != 0){
            std::reverse(nosp.begin(), nosp.end());
        }

        return nosp;
    }
};

int main(){

    Sanitizer germ("Heros#N@g#B# A#T#T#L#E  @");
    std::cout << germ.sanitize() << "\n";
}
