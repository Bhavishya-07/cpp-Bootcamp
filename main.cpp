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

    vector<int> CPUTemp;

    CPUTemp.push_back(72);
    CPUTemp.push_back(45);
    CPUTemp.push_back(90);
    CPUTemp.push_back(60);
    CPUTemp.push_back(85);
    CPUTemp.push_back(50);

    sort(CPUTemp.begin(), CPUTemp.end());

    for (const auto& i : CPUTemp){
        cout << i << " ";
    }
    cout << "\n\n";

    bool a = binary_search(CPUTemp.begin(), CPUTemp.end(), 85);
    if (a == 1){
        cout << "85 present! \n\n";
    }

    else{
        cout << "85 not present! \n\n";
    }

    sort(CPUTemp.rbegin(), CPUTemp.rend());

    for (const auto& j : CPUTemp){
        cout << j << " ";
    }

    return 0;
}