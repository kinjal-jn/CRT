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
    //upcasting
    Sir *ptr;
    Kinjal b;
    ptr=&b;
    ptr->myName();

    //overriding
    //Kinjal k;
    //k.myName();
    
    return 0;
}