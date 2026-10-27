#include <iostream>

using namespace std;
template <typename T>

class MyVector{
    T* ValP;
    size_t Vsize = 0;
    size_t Vcapacity;
    int rcheck;

public:

    MyVector() {
        if (Vsize == 0){
            ValP = nullptr;
            Vsize = 0;
            rcheck = 0;
            Vcapacity = 0;
        }
    }

    ~MyVector(){
        delete[] ValP;
        cout << "------------------------| Vector wiped! |------------------------\n";
    }

    void reserve(int cap){
        Vcapacity = cap;
        rcheck = 3;
        ValP = new T[Vcapacity];
    }

    void push_back(const T& value){

        if (Vcapacity == 0 && rcheck == 0){
            Vcapacity++;
            ValP = new T[Vcapacity];
        }

        if (Vcapacity == Vsize && rcheck == 0){
            Vcapacity *= 2;
            T* n_ValP = new T[Vcapacity];
            for(size_t j = 0; j < Vsize; j++){
                n_ValP[j] = ValP[j];
            }
            delete[] ValP;
            ValP = n_ValP;
        }

        if (Vsize <= Vcapacity){
            ValP[Vsize] = value;
            Vsize++;
        }

    }

    void size(){
        cout << Vsize;
    }

    void capacity(){
        cout << Vcapacity;
    }

    void pop_back(){
        Vsize--;
    }

    T& operator[](size_t index){
        return ValP[index];
    }

};

int main(){
    
    MyVector<int> jethalal;
    int val = 3;
    jethalal.reserve(30);
    
    for(int i = 0; i <= 20; i++){
        jethalal.push_back(val + i);
    }

    jethalal.size();
    cout << "\n";
    jethalal.capacity();
    cout << "\n";
    jethalal.pop_back();
    jethalal.size();
    cout << "\n";
    return 0;
}