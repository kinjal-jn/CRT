#include<iostream>
using namespace std;

class fruit{
    public:
    void color(){
        cout<<"Color of the fruit depends on the fruit type\n";
    }
};

class Apple : public fruit{
    public:
    void color(){
        cout<<"Apple is red\n";
    }
};

class Mango : public fruit{
    public:
    void color(){
        cout<<"Mango is yellow\n";
    }
};

class Orange : public fruit{
    public:
    void color(){
        cout<<"Orange is orange\n";
    }
};

int main(){
    
    fruit f;
    Apple a;
    Mango m;
    Orange b;

    f.color();
    a.color();
    m.color();
    b.color();
    
    return 0;
}