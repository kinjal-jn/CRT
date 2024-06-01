#include<iostream>
using namespace std;

class Test{
    public:
    virtual void show()=0;
    virtual void dis()=0;
};

class Base : public Test{
    public:
    void show(){
        cout<<"show\n";
    }
    void dis(){
        cout<<"display";
    }
};

int main(){
    Base b;
    b.show();
    b.dis();
    return 0;
}