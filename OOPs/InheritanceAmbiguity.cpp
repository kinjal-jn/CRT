#include<iostream>
using namespace std;

class A{
    public:
        void show(){
        cout<<"I am in class A";
    }
};

class B: public A{
    public:
        void show(){
        cout<<"I am in class B";
    }
};

class C: public B, public A{};

int main(){

    C obj; 
    //obj.A::show();   error!!
    obj.B::show();


    return 0;
}