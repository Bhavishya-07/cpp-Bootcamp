#include <iostream>

void calculateTotalInventory(const int grid[][3][3], int layers){
    int sum = 0;
    for (int k = 0; k < layers; k++){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                sum += grid[k][i][j];

            }
        }
    } std::cout << "Sum of elements of the cube: " << sum << std::endl;
}

int main(){
    int grid[][3][3] {
    {  {5, 5, 5},
        {5, 5, 5},
        {5, 5, 5}
    },
    { 
        {10,10,10},
        {10,10,10},
        {10,10,10}
    }
};

    int layers = 2;
    calculateTotalInventory(grid, layers);
}



