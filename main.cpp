#include <iostream>

int main() {
    int quantity;
    float price;
    std::cout << "Enter the quantity of the items: ";
    std::cin >> quantity;
    std::cout << "Enter the price for 1 item: ";
    std::cin >> price;

    std::cout << "The total cost is: "  << (quantity*price) << std::endl;
    return 0;
}