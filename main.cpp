#include <iostream>

bool isSS(const int matrix[][3], int rows){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < rows; j++) {
            if (matrix[i][i] != 0 || matrix[i][j] != -matrix[j][i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int mymatrix[][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    int myrows = 3;

    for (int a = 0; a < 3; a++){
        for (int b = 0; b < 3; b++){
            std::cout << "Enter the (" << a + 1 << "," << b+1 << ") index value: ";
            std::cin >> mymatrix[a][b];
            std::cout << std::endl;
        }
    }

    if (isSS(mymatrix, myrows)){
        std::cout << "Given matrix is skew-symmetric! :)" << std::endl;
    }

    else{
        std::cout << "Given matrix is not skew-symmetric :(" << std::endl;
    }
    return 0;
}