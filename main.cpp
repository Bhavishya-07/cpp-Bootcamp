#include <iostream>
using namespace std;

class CharBuffer{
    char* data;
    size_t size;
public:

    CharBuffer(size_t s) : size(s), data(new char[s]){}

    ~CharBuffer(){
        delete[] data;
    }

    CharBuffer(const CharBuffer& other) : size(other.size) , data(new char[other.size]) {
        copy(other.data, other.data + other.size, data);
    }

    CharBuffer& operator=(const CharBuffer& other){
        if(this == &other){
            return *this;
        }

        delete[] data;

        size = other.size;
        data = new char[other.size];
        copy(other.data, other.data + other.size, data);

    }

    CharBuffer(CharBuffer&& other) noexcept: size(other.size), data(other.data){
        other.data = nullptr;
        other.size = 0;
    }

    CharBuffer& operator=(CharBuffer&& other) noexcept{
        if (this == &other){
            return *this;
        }

        delete[] data;

        size = other.size;
        data = other.data;
        other.data = nullptr;
        other.size = 0;
    }
};

int main(){

    CharBuffer buf1 = 10000000;
    CharBuffer buf2 = 1000000;
    buf2 = buf1;

    return 0;
}