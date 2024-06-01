#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    int roll;
    string name;
    char grade;

    public:
    //setter
    void setRoll(int r){
        this->roll= r;
    }
    //getter
    int getRoll(){
        return roll;
    }

    //setter
    void setName(string n){
        this->name= n;
    }
    //getter
    string getName(){
        return name;
    }

    //setter
    void setGrade(char g){
        this->grade= g;
    }
    //getter
    char getGrade(){
        return grade;
    }
};

int main(){
    Student st;
    st.setRoll(102);
    cout<<"Roll no.: "<<st.getRoll();

    st.setName("kinjal");
    cout<<"\nName: "<<st.getName();

    st.setGrade('A');
    cout<<"\nGrade: "<<st.getGrade();

    return 0;
}