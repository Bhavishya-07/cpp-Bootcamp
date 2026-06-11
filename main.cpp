#include <iostream>

int main(){

    int rowSums[] = {0, 0, 0};
    int a = 0;
    int j = 0; 
    int grid[][3] {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            a += grid[i][j];
        }    
        rowSums[i] = a;
        if (a % 2 == 0){
            for (j = 0; j < 3; j++){
                grid[i][j] = 0;
                std::cout << grid[i][j] << " ";
            }
            
        }
        else {
            for (j = 0; j < 3; j++){
                grid[i][j] = 1;
                std::cout << grid[i][j] << " ";
            }
        }
        std::cout << std::endl;
        a = 0;
        
    }
    
            
        
    
    return 0;
}