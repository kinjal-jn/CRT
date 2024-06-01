#include<iostream>
#include<string>
using namespace std;

class Employee{
public:
    int ID;
    string designation;
    static string compname;

    Employee(int ID, string designation){
        this->ID= ID;
        this->designation= designation;
    }
    void dis(){
        cout<<ID<<" "<<designation<<" "<<compname<<"\n";
    }
};

string Employee::compname = "JECRC";

int main(){
    Employee s1(101, "Kinjal");
    s1.dis();
    Employee s2(102, "Komal");
    s2.dis();
}
