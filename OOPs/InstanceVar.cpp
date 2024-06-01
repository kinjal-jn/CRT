#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int roll;
    string name;
    const static int cm=7500;

    Student(int roll, string name){
        this->roll= roll;
        this->name= name;
    }
    void dis(){
        cout<<roll<<" "<<name<<" "<<cm;
    }
};

//int Student::cm=7500;

int main(){
    Student s1(101, "Kinjal");
    s1.dis();

}