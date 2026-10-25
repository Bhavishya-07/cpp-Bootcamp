#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Employee{
protected:
    string name;
    double baseSalary;

public:
    Employee(string n, double s) : name(n), baseSalary(s){}

    virtual ~Employee(){
        cout << "-----------------------------------------Employee data put back-----------------------------------------\n";
    }
};

class Manager : public Employee{
private:
    double bonus;

public:
    Manager(Employee e, double b) : Employee(e), bonus(b){}

    ~Manager(){
        cout << "-----------------------------------------Manager data put back-----------------------------------------\n";
    }

    void display(){
        cout << "Manager " << name << " has a net salary: " << baseSalary + bonus << "\n";
    }
};

int main(){
    
    Manager m1(Employee("Bhavishya Aggarwal", 75000.0), 15000.0);

    m1.display();

    return 0;
}
