#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

template <typename T1, typename T2>
class Pair{
    T1 first;
    T2 second;

public:
    Pair() = default;

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

};

int main(){
    Pair<int, std::string> M;
    Pair<double, double> T;

    M.setFirst(101);
    M.setSecond("Thor");

    T.setFirst(45.5);
    T.setSecond(90.2);

    M.print();
    T.print();
}