#include<iostream>
using namespace std;

class Test{
    public:
    
    int r;
    void insert(int r){
        this->r=r;
    }
};

class Base : public Test{
    public:
    float area;
    void logic(){
        area= 3.14*r*r;
    }
};

class SecondBase : public Base{
    public:
    void dis(){
        cout<<"area: "<<area;
    }
};

int main(){
    SecondBase c;
    c.insert(2);
    c.logic();
    c.dis();
    return 0;
}