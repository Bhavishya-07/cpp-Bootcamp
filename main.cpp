#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <deque>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main(){

    vector<int> SigStr;

    SigStr.push_back(15);
    SigStr.push_back(45);
    SigStr.push_back(85);
    SigStr.push_back(200);
    SigStr.push_back(25);
    SigStr.push_back(5);

    int boostAmount = 15;
    int boostedCount = 0;

    for_each(SigStr.begin(), SigStr.end(), [&](int& a){
        if (a <= 50){
            a += boostAmount;
            boostedCount++;
        }
    });

    for (const auto& g : SigStr){
        cout << g << " ";
    }
    cout << endl;

    return 0;
}