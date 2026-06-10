#include <iostream>

int main() {
    
    int scores[] = {45, 89, 72, 12, 95, 90};
    int super = 0;
    for (int i = 0; i <= 7; i++) {
    
        if (scores[i] >= super) {
            super = scores[i];
        }
        else {
        }
        
    }
    std::cout << "The player who scored " << super << " wins!" << std::endl;
    
}