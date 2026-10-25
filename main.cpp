#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <deque>
#include <list>

using namespace std;

int main(){

    vector<string> logs;
    logs.reserve(5);

    logs.push_back("ERROR_CODE 413");
    logs.push_back("ERROR_CODE 564");
    logs.push_back("ERROR_CODE 2466");
    logs.push_back("ERROR_CODE 8678");

    cout << "Size withheld: " << logs.size() << "\nPotential Capacity: " << logs.capacity() << "\n";

    cout << "----------------------------------------------------------------------------------------\n";

    deque<string> cp;

    cp.push_back("RUN_CODE: 90");
    cp.push_back("RUN_COMMAND_DUAL_AT_SEC7897");
    cp.push_front("EMERGENCY_RUN_CODE_AT_P4975");

    for (const auto& a : cp){
        cout << a << "\n";
    }

    return 0;
}