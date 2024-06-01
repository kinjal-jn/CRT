#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    int roll;
    

    public:
    //setter
    Student(){
        roll=0;
    }
    friend int setRoll(Student);
    
};

int setRoll(Student st){
    st.roll +=10;
    return st.roll;
}

int main(){
    Student st;
    cout<<"roll no: "<< setRoll(st);
    return 0;
}