#include<iostream>
using namespace std;

int search(int arr[], int n, int x){
    int i;
    for(int i=0; i<10; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5]={2,4,0,1,9};
    int x=2;
    int n= sizeof(arr)/sizeof(arr[0]);
    int result = search(arr, n,x);
    if(result == -1)
        cout<<"not found";
    else
        cout<<"Element found at index: "<<result;

    return 0;
    
}