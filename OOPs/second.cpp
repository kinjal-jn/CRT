#include<iostream>
using namespace std;

class Test{
    public:
    int roll; //global variable scope whole program
    void insert(int r) // r is local variable
    {
        roll=r;
    }
    void display(){
        cout<<roll;
    }
};

int main(){
    Test t;
    t.insert(5);
    t.display();
    return 0;
}