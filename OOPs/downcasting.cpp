#include<iostream>
using namespace std;

class Sir{
    public:
    void myName(){
        cout<<"Hii Sir";
    }
};

class Kinjal : public Sir{
    public:
    void myName(){
        cout<<"Hii kinjal";
    }
};

int main(){
    //downcasting
    Sir *ptr;
    Kinjal b;
    ptr = &b;
    //ptr=(float)b;
    
    return 0;
}