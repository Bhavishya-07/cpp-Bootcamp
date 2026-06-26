#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

void capitalizeString(std::string &text);
void printSecurely(const std::string &text);

int main(){

    std::string text;
    std::cout << "Enter the message: ";
    std::getline(std::cin, text);
    
    capitalizeString(text);
    printSecurely(text);

    return 0;
}

void capitalizeString(std::string &text) {
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);
}

void printSecurely(const std::string &text){
    std::cout << text << "\n";
}