#include<iostream>
using namespace std;


class Hero
{
    public:
    int health;
    char level;


    Hero(int health, char level){
        this->health= health;
        this->level= level;

    }
    
    void show(){
    cout<<"The health is "<< health<< " and level :"<<level<<endl;
    }

};



int main()
{
    Hero h(45,'H');
    h.show();

    Hero b(h);
    b.show();

    b.level='b';
    b.show();
    h.show();
    

}