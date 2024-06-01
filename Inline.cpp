#include<iostream>
#include<string>
#include<math.h>
using namespace std;


class student{
    int roll;
    string name;
    public:
    void input();
    void output();
};

int main(){
    student s1;
    student s2;
    student *s3= new student();

    cout<<"\n\n Fill the data of s1";
    s1.input();
    cout<<"\n\n Fill the data of s2";
    s2.input();
    cout<<"\n\n Fill the data of s3";
    s3->input();

    cout<<"\n All data saved: ";
    s1.output();
    s2.output();
    s3->output();

    return 0;
}
 // using scope resolution operator =>  
void student::input(){
    cout<<"\n Enter roll no.: ";
    cin>>roll;
    cout<<"\n Enter name: ";
    cin>>name;
}
inline void student::output(){
    cout<<"\n Roll: "<<roll;
    cout<<"\n Name: "<< name;
}
