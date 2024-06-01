//const name same but parameter different
#include<iostream>
using namespace std;

class Test{
    public:
    Test(int x){
        cout<<"int";
    }
    Test(){
        cout<<"\nNo argument";
    }
    Test(char x){
        cout<<"\nchar";
    }
};

int main(){
    Test t(10);
    Test t1();
    Test t2('k');
    return 0;
}