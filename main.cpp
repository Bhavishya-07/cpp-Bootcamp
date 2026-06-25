#include <iostream>
#include <string>

int main(){

    std::string msg;
    std::cout << "Enter the message: ";
    std::getline(std::cin, msg);
    
    std::string c = "";
    for (int i = 0; i < msg.size(); i++){
        c += msg.at(msg.size() - 1 - i);
    }

    if(msg == c){
        std::cout << "Entered line is a Pallindrome!";
    }

    else{
        std::cout << "Entered line is not a Pallindrome!";
    }
    
    return 0;
}