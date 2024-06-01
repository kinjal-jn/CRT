#include<iostream>
using namespace std;
class abc{
    int num;
    public:
        abc(){
            num=0;
            cout<<"default constructor";
        }
        
        abc(int n){
            cout<<"\nparameterized constructor";
            num=n;
        }
};

int main(){
    abc o1;
    abc o2(50);
    return 0;
}