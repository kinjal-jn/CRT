#include<iostream>
using namespace std;

#define forn(i,n) for(i=0; i<n; i++)

void input_arr(int arr[], int n){
    int i;
    forn(i,n){
        cin>>arr[i];
    }
}

void print(int arr[], int n){
    int i;
    forn(i,n){
        cout<<arr[i];
    }
}

int solve(int arr[], int n){
    if(n==1){
        return arr[0];
    }
    return arr[n-1] + solve(arr, n-1);
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    input_arr(arr, size);
    cout  << solve(arr,size);
    // print(arr, size);

}