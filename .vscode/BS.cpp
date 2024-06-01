//log(n)


#include<iostream>
using namespace std;

int BinarySearch(int arr[], int x, int s, int e){
    while(s<=e){
        int mid= (s+e)/2;
        
        if(arr[mid]==x)
            return mid;
        
        else if(arr[mid]<x)
            s=mid+1;

        else if(arr[mid]>x){
            e = mid-1;
        }

    }
    return -1;
}

int main(){
    int arr[5]={2,4,0,1,9};
    int x=2;
    int n= sizeof(arr)/sizeof(arr[0]);
    int result = BinarySearch(arr, n, 0, n=1);
    if(result == -1)
        cout<<"not found";
    else
        cout<<"Element found at index: "<<result;

    return 0;
}