#include<iostream>
#include<string>
#include<algorithm>

#include<math.h>
using namespace std;

int gcd(int x, int y){
    if(x==0)
        return y;
    if(y==0)
        return x;

    return gcd(y,x%y);
}

int main(){
    int x,y;
    cout<<"Enter numbers: ";
    cin>>x,y;
    cout<<gcd(x,y);
    return 0;
}