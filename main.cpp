#include <iostream>

using namespace std;

class Sensor {
    float reading;
public:

    Sensor(float r) : reading(r){}

    ~Sensor(){
        cout << "Reading wiped out!\n";
    }

    float getReading() const{
        return reading;
    }
};

void printLog(char* msg){
        cout << msg << "\n";
}

int main() {
  
    Sensor value(967.22);

    int intValue = static_cast<int>(value.getReading());

    cout << intValue << "\n";

    const char* Log = "ADC_OK";

    printLog(const_cast<char*>(Log)); 

    return 0;
}