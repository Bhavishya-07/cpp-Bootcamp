#include <iostream>
#include <string>
#include <vector>

class Vehicle {
    public:
    int speed;
    std::string brand;

    Vehicle(int s, std::string b) : speed(s), brand(b){}

    virtual ~Vehicle(){
        std::cout << "Cleanup!\n";
    }

    virtual void Driving(){
        std::cout << brand << ": " << speed << "\n";
    }
};

class Car : public Vehicle{
    public:
    int doors;

    Car(int s, std::string b, int d) : Vehicle(s, b), doors(d){}

    ~Car(){
        std::cout << "Car data deleted!\n";
    }

    void Driving() override {
        std::cout << "A " << doors << "-door " << brand << " car is moving with a speed of " << speed << "km/h \n";

    }

};

class Truck : public Vehicle{
    public:
    int cargo_weight;

    Truck(int s, std::string b, int cw) : Vehicle(s, b), cargo_weight(cw){}

    ~Truck(){
        std::cout << "Truck data deleted!\n";
    }

    void Driving() override {
        std::cout << "A " << brand << " truck is moving with a speed of " << speed << "km/h, carrying " << cargo_weight << " tons of shipment. \n";

    }

};

int main(){

    std::vector<Vehicle*> Road;

    Road.reserve(2);
    Road.push_back(new Car(40, "Audi", 4));
    Road.push_back(new Truck(30, "Mahindra", 36));

    for (Vehicle* c : Road){
        c -> Driving();
    }

    for (Vehicle* c : Road){
        delete c;
    }

    return 0;
}