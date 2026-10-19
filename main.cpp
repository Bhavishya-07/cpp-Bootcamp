#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Vehicle{

public:
    
    Vehicle() {
        cout << "Vehicle recieved!\n";
    }

    virtual ~Vehicle(){
        cout << "Vehicle put back.\n";
    }

    virtual void startEngine() = 0;
};

class Car : public Vehicle{
    public:
    Car(){
        cout << "Car recieved!\n";
    }

    ~Car(){
        cout << "Car put back!\n";
    }

    void startEngine() override {
        cout << "Car engine start!\n";
    }
};

class Bike : public Vehicle{
    public:
    Bike(){
        cout << "Bike recieved!\n";
    }

    ~Bike(){
        cout << "Bike put back!\n";
    }

    void startEngine() override{
        cout << "Bike engine start!\n";
    }
};



int main(){
    
    vector<unique_ptr<Vehicle>> Lorry;

    Lorry.push_back(make_unique<Car>());
    Lorry.push_back(make_unique<Bike>());

    for (const auto& ride : Lorry){
        ride -> startEngine();
    }

    return 0;
}