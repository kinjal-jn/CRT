#include <iostream>
#include<cmath>
using namespace std;
 
struct Negation {
    int x;
    int y= (-1)*x;
};
 
int main()
{
    struct Negation n;
    cout<<"input value: ";
    cin>>n.x;
    if(n.x<0){
    cout<<"absolute value is: ";
    cout<<n.y;
    }
    else{
        cout<<n.x;
    }
    return 0;
}