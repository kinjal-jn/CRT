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
//Approach 1
int solve(int arr[], int n, int k){
    int temp[k];
    forn(i,k){
        temp[i]= arr[i];
    }

    for(int i=k; i<n; i++){
        arr[i-k]=arr[i];
    }

    for(int i=0; i<k; i++){
        arr[n-k+i]= temp[i];
    }
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