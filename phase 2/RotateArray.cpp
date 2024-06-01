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
int solve(int arr[], int n){
    int temp=arr[0];
    forn(i,n){
        arr[i]=arr[i+1];
        arr[n]=temp;
    }
}

//Approach 2
int solve_again(int arr[], int n){
    for(int i=n-1; i>=0; i++){
        swap(arr[0], arr[i]);
       
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    input_arr(arr, size);
    solve_again(arr,size);
    print(arr, size);

}