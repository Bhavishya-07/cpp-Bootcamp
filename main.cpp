#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

template <typename T1, typename T2>
class Pair{
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b){}

    T1 getFirst() const{
        cout << "First Element: " << first << "\n";
        return first;
    }

    T2 getSecond() const{
        cout << "Second Element: " << second << "\n";
        return second;
    }

    void setFirst(const T1& f){
        first = f;
    }

    void setSecond(const T2& s){
        second = s;
    }

    void print() const{
        cout << "(" << first << ", " << second << ")\n";
    }

    bool operator==(const Pair& other) const{
        if(first == other.first && second == other.second){
            return true;
        }

        else{
            return false;
        }
    }

    Pair operator+(const Pair& other) const{
        return Pair(first + other.first, second + other.second);
    }

    friend ostream& operator<<(ostream& os, const Pair& c){
        os << "(" << c.first << ", " << c.second << ")\n";
        return os;
    }

};

int main(){
    Pair<int, int> p1(10, 20);
    Pair<int, int> p2(5, 5);

    // Test operator+
    Pair<int, int> p3 = p1 + p2; 

    // Test operator<<
    cout << "p1: " << p1 << "\n";
    cout << "p2: " << p2 << "\n";
    cout << "p3 (p1 + p2): " << p3 << "\n";

    // Test operator==
    Pair<int, int> p4(15, 25);
    if (p3 == p4) {
        cout << "p3 and p4 are identical!\n";
    }

    return 0;
}