#include<iostream>
using namespace std;

class A{
    public:
        int a,b;
        int avg=0;
        void input(int a, int b){
        this->a=a;
        this->b=b;
    }
};

class B: public A{
    public:
        void average(){
        avg= (a+b)/2;
    }
};

class C: public A{
    public:
    void disp(){
        cout<<avg;
    }
};

int main(){
    A a;
    B b;
    C c;

    a.input(2,4);
    b.average();
    c.disp(); 
    
    return 0;
}