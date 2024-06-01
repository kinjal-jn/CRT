#include<iostream>
#include<math.h>
using namespace std;

int power(int n, int e){
    if(e==0){
        return 1;
    }  
    return n* power(n, e-1); 
}


int main(){
    int n,e;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>e;
    cout<<"Result: ";
    int result= power(n,e);
    cout<<result;
    return 0;
    
}