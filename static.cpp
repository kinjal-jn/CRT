#include<iostream>
using namespace std;

class student{
    int x; // instance variable or object variables
    static int count; // class variable
    public:
    static void show1(){ // can only use static vbl
        cout<<count;
    }
    void show(){
        cout<<x<<endl<<count;
    }
};

//static variable is global (common for all variables)
//static is class variable
int student::count=20;


int main(){
    student s1,s2;
    s1.show1(); 
    cout<<endl;
    student::show1();
    cout<<endl;
    s2.show();
    return 0;
}