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
    int mid;
   
    if(n%2==0){
        return (arr[(n/2)]+ arr[n/2-1])/2.0;
    }
    return arr[(n/2)];
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    input_arr(arr, size);
    cout<<solve(arr,size);
    //print(arr, size);

}