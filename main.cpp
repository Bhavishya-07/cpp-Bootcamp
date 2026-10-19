#include <iostream>
#include <memory>

using namespace std;

class Laptop{
    int RAM;
public:
    
    Laptop(int r) : RAM(r) {
        cout << "Laptop recieved!\n";
    }

    ~Laptop(){
        cout << "Laptop put back.\n";
    }

    bool ramcheck(){
        if (RAM >= 16){
            cout << "Laptop with RAM: " << RAM << "GB is optimal for GTA 6!\n";
            return true;
        }

        else{
            cout << "Not optimal for GTA 6, needs extension.\n";
            return false;
        }
    }
};

int main(){
    int ct;

    cout << "------------Trying HP Victus 15-------------\n";
    shared_ptr<Laptop> HP = make_shared<Laptop> (40);

    HP -> ramcheck();
    
    cout << "------------Trying Acer Nitro V15------------\n";
    shared_ptr<Laptop> Acer = HP;

    Acer -> ramcheck();

    cout << "------------Trying ASUS TUF Gaming------------\n";
    shared_ptr<Laptop> Asus = HP;

    Asus -> ramcheck();

    cout << "------------Trying Dell------------\n";
    shared_ptr<Laptop> Dell = Asus;

    if (Dell -> ramcheck() == true) {
        ct = HP.use_count();
    }

    cout << "------------Trying Lenovo------------\n";
    unique_ptr<Laptop>Lenovo = make_unique<Laptop>(10);

    if (Lenovo -> ramcheck() == true){
        ct += 1;
    }
    
    
    cout << "Total Laptops eligible for GTA 6 = " << ct << "\n" ;
}