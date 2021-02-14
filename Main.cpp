#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

struct Monk
{
    int health;
    int attack;
    unsigned char x_axis;
    unsigned char y_axis;
};

struct Monster
{   
    int health;
    int attack;
    unsigned char x_axis;
    unsigned char y_axis;
};

int main()
{
    cout<<" Welcome to the Dungeon!!" << endl;
    bool hero_win = false;

    unsigned char room[10][10] = {
        {1,0,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,0,0,0,0,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,0,1,1,1,1,1,1,1,1},
        {1,1,0,0,1,0,1,1,0,1},
        {1,1,1,1,1,1,0,0,1,1},
        {1,1,1,1,1,1,1,1,1,1},
    };

    Monk Tom;
    Tom.health = 15;
    Tom.attack = 3;
    Tom.x_axis = 5;
    Tom.y_axis = 5;

    Monster Hydra;
    Monster Mantis;
    Hydra.health=6;
    Mantis.health=9;
    Hydra.x_axis=2;
    Hydra.y_axis=2;
    Mantis.x_axis=6;
    Mantis.y_axis=6;
    Hydra.attack=2;
    Mantis.attack=1;

    char key = 0;
    while(key!='q'){

    //----Map---//
    if(hero_win=true){
        for(int i = 0; i < 10; i++){
            cout <<  endl;
            for(int j = 0; j < 10; j++){
                if(i == Tom.x_axis && j == Tom.y_axis){
                    cout << char(2);
                }
                else if(room[i][j] == 1){
                    cout << (unsigned char)'#';
                }
                 else if(room[i][j] == 0){
                    cout << (unsigned char)' ';
                }
                 else if(room[i][j] == 2){
                    cout << (unsigned char)'H';
                }
                 else if(room[i][j] == 3){
                    cout << (unsigned char)'M';
                }
                 else if(room[i][j] == 4){
                    cout << (unsigned char)'T';
                }
                hero_win = false;
            }

        }
    }
    cout << endl;

    //---Move---//
    cout << "Attack of monk is " << Tom.attack << endl;
    cout << "Health of monk is " << Tom.health << endl;
    cout << "To move upwards press 'W', left 'A', down 'S', right 'D'" << endl;
    cout << "Make your move" << endl;
    cin >> key;

    if(key == 's' && Tom.y_axis < 10 && room[Tom.y_axis+1][Tom.x_axis] != 1){
        Tom.y_axis++; system("cls");
    }

    if(key == 'w' && Tom.y_axis > 0 && room[Tom.y_axis-1][Tom.x_axis] != 1){
        Tom.y_axis--; system("cls");
    }

    if(key == 'a' && Tom.x_axis > 0 && room[Tom.y_axis][Tom.x_axis-1] != 1){
        Tom.x_axis--; system("cls");
    }

    if(key == 'd' && Tom.x_axis < 9 && room[Tom.y_axis][Tom.x_axis+1] != 1){
        Tom.y_axis--; system("cls");
    }

    if(room[Tom.y_axis][Tom.x_axis] == 4){
        cout << "YOU WIN!!" << endl;
        system("pause");
        exit(1);
    }
    string fightorFlee="";

    





    
    
    }
  return 0;
}