#include<iostream>
using namespace std;

class Employee{
    private:
    int salary;
    public:
    //setter
    void setSalary(int s){
        this->salary= s;
    }
    //getter
    int getSalary(){
        return salary;
    }
};

int main(){
    Employee e;
    e.setSalary(50000);
    cout<< e.getSalary();
    return 0;
}