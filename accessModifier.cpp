#include<iostream>  
using namespace std;    


class animal{
    int x=45;



    public:
    void setx(int a){
        x=a;

    }

    void showx(){
        cout<<"The value of x is : "<<x<<endl;
    }

};


int main(){
    cout<<"Mithilesh"<<endl;
    animal a1;
    a1.showx();
    a1.setx(12);
    a1.showx();

}