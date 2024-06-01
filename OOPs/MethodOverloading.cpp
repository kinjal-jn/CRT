#include<iostream>
using namespace std;

class fruit{
    public:
    void color(){
        cout<<"Color of the fruit depends on the fruit type\n";}
   
    void color(int x){
        cout<<x;}

    void color(char x){
        cout<<x;
    }
    
};

int main(){
    
    fruit f;
    
    f.color();
    f.color(2);
    f.color('c');
    
    
    return 0;
}