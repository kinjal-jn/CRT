#include<iostream>
#include <algorithm>
using namespace std;

#define forn(i,n) for(int i=0; i<n; i++)

void input_arr(int arr[], int n){
    int i;
    forn(i,n){
        cin>>arr[i];
    }
}

void print(int arr[], int n){
    int i;
    forn(i,n){
        cout<<arr[i]<<" ";
    }
}

int solve(int arr[], int n, int k){
    reverse(arr, arr+n);
    reverse(arr, arr+(n-k));
    reverse(arr+(n-k), arr+n);
}

int main(){
    int size,k;
    cin>>size;
    int arr[size];

    input_arr(arr, size);
    cin>>k;
    solve(arr,size,k);
    print(arr, size);

}