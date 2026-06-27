#include <iostream>
#include <vector>
#include <algorithm>

void squareElements(std::vector<int> &nums);
void sortDescending(std::vector<int> &nums);
void printVector(const std::vector<int> &nums);

int main() {
    
    std::vector <int> nums = {3, 1, 9, 5, 2};

    squareElements(nums);
    sortDescending(nums);
    printVector(nums);

    return 0;
}

void squareElements(std::vector<int> &nums){
    for (int &a : nums){
        a*=a;
    }
}

void sortDescending(std::vector<int> &nums){
    std::sort(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.end());
}

void printVector(const std::vector<int> &nums){
    for(int h : nums){
        std::cout << h << " ";
    }
}