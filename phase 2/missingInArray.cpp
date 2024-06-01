#include<iostream>
using namespace std;

int main(){
    long int sum=6*7/2;
    int arr[5]={1,2,4,5,6};
    
    for(int i=0; i<5; i++){
        sum-=arr[i];
    }
    
    cout<<sum;
    return 0;
}