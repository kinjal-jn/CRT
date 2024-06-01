#include<iostream>
using namespace std;

class message{
    
    public:
    void Hi();
    void Bye();
};
int main(){
    message *m1= new message();
    cout<<"Welcome to jaipur";
    m1->Hi();
    m1->Bye();
}

void message::Hi(){
    cout<<"\nHii ";
}

void message::Bye(){
    cout<<"\nBye ";
}

