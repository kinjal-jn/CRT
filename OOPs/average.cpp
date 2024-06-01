#include<iostream>
using namespace std;

class average{
    private:
    int a,b,c;
    float av;
    public:

    void insert(int x, int y, int z){
        a=x;
        b=y;
        c=z;
    }

    void avg(){
        av= (a+b+c)/3;
    }

    void display(){
        cout<< av;
    }
    

};

int main(){
    average t;
    t.insert(10,20,30);
    t.avg();
    t.display();

    return 0;
}