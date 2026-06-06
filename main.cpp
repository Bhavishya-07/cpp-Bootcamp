#include <iostream>

int main() {
    bool isBanned;
    std::string Thor;
    std::string Storm;
    std::string UserName;

    std::cout << "Enter User Name: ";
    std::cin >> UserName;

    std::cout << "Do you have Thor? (Y/N): ";
    std::cin >> Thor;

    std::cout << "Do you have Storm? (Y/N): ";
    std::cin >> Storm;

     if (UserName == "Ironmonger2"){
        isBanned = true;
    } else{
        !isBanned;
    }
    
    if (Thor == "Y" || Storm == "Y"){
        std::cout << "Checking for bans.............." << std::endl;
        if (!isBanned) {
            std::cout << "Welcome to dungeons!";
        } else {
            std::cout << "Banned User, Access denied!";
        }
    } else if (Thor == "N" && Storm == "N"){
        std::cout << "You need at least 1 to enter the dungeons!" << std::endl;
    } else {
        std::cout << "Enter Valid reponse" << std::endl;
    }

   
    return 0;
}