#include <iostream>
#include <string>

class Artifact {
public:
    std::string type;
        std::string character;
        int star_rating;

        void upgrade(int Essence_of_Dimension){
            if (Essence_of_Dimension >= 350){
                star_rating += 1;
                std::cout << "Artifact ranked " << star_rating << " star of " << character << "\n";

            }
            else{
                std::cout << "Sufficint Materials not provided \n";
            }

        }
     
};

int main(){

    Artifact my_gear;

    my_gear.type = "Striker";
    my_gear.character = "Storm";
    my_gear.star_rating = 4;

    my_gear.upgrade(230);

}

