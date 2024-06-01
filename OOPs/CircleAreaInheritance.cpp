#include<iostream>
using namespace std;


class Parent{
    public:
    float area;
    int r;
    void insert(int r){
        this->r=r;
    }
    void logic(){
        area= 3.14*r*r;
    }
};

class child : public Parent{
    public:
    void dis(){
        cout<<"area: "<<area;
    }
};

int main(){
    child c;
    c.insert(2);
    c.logic();
    c.dis();
    return 0;
}