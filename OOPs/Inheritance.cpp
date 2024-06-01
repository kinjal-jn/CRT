#include<iostream>
using namespace std;

class Test{
    public:
    void show(){
        cout<<"hello";
    }
};

class Base : public Test{
    public:
    void dis(){
        cout<<"welcome";
    }
};

int main(){
    Base b;
    b.show();
    b.dis();
    return 0;
}