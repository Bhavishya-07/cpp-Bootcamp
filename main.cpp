#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int thor_hp = 400;
    int iron_hp = 250;

    int* active_hero;

    active_hero = &thor_hp;

    std::cout << *active_hero << std::endl;

    active_hero = &iron_hp;

    *active_hero -= 50;

    std::cout << iron_hp;
}