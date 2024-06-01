#include<iostream>
using namespace std;

class Bill{
    public:
    int bill;
    int unit;

    void insert(int unit){
        this->unit= unit;
    }
    void logic(){
        if(unit<100){
            bill=200;
        }
        else if(unit>100 && unit<200){
            bill= 200 + 2*abs(100-this->unit)+ 200; 
        }
        else if(unit>200 && unit<300){
            bill = 200 + 2*100 + 3*abs(200-this->unit)+ 200;
        }
        else if(unit>300 && unit<400){
            bill = 200 + 2*100 + 3*100 + 5*abs(300- this->unit)+ 200;
        }
        else{
            bill = 200 + 2*100 + 3*100 + 5*100+ 7*abs(400- this->unit)+ 200;
        }
    }

    void output(){
        cout<<bill;
    }
};

int main(){
    Bill b;
    b.insert(430);
    b.logic();
    b.output();
    
    return 0;
}