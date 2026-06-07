#include <iostream>

int main() {

    for (int a = 2; a <= 8; a += 3) {
        for (int b = 1; b <= 7; b+=3) {
            if (a > b && (a+b) % 3 == 0){
                std::cout << "(" << a << "," << b << ")" << std::endl;
            }
        }
    
    }
    return 0;
}