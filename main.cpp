#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main(){

    std::string alpha;
    std::cout << "Enter the message: ";
    std::getline(std::cin, alpha);

    std::transform(alpha.begin(), alpha.end(), alpha.begin(), ::toupper);

    std::reverse(alpha.begin(), alpha.end());

    std::cout << alpha << "\n";


    return 0;
}
