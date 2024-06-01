#include<iostream>
using namespace std;

class Test{
    private:
    int num=3;
    public:
    
    Test() : num(3) {}

    void operator <<(){
        num=num*3;
    }

    void print(){
        cout<<num;
    }
    
};

int main(){
    
    Test tt;
    
    tt.print();
    
    
    return 0;
}