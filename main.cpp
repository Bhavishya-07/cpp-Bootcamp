#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <deque>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

using namespace std;

int main(){

    unordered_map<string, int> freqCount;

    freqCount["TCP"] = 3;
    freqCount["UDP"] = 2;
    freqCount["ICMP"] = 1;

    for (const auto& a : freqCount){
        cout << a.first << " = " << a.second << "\n";
    }

    cout << "======================================================================================\n";

    set<string> dupCheck = {"AUTH_OK", "AUTH_FAIL", "AUTH_OK", "TOKEN_EXPIRED"};

    for (const auto& T : dupCheck){
        cout << T << "\n";
    }


    return 0;
}