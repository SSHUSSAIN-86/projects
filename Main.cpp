#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

struct Monk
{
    int health;
    int attack;
    unsigned char x_coordinate;
    unsigned char y_coordinate;
};

struct Monster
{   
    int health;
    int attack;
    unsigned char x_coordinate;
    unsigned char y_coordinate;
};

int main()
{
    cout<<" Welcome to the Dungeon!!" << endl;

    unsigned char room[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
    };

    Monk m1;
    m1.health = 15;
    m1.attack = 3;
    m1.x_coordinate = 5;
    m1.y_coordinate = 5;

    Monster e1;

    cout<< "Attack of monk is " << m1.attack << endl;
    

  return 0;
}