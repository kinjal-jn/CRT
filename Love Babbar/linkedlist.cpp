#include<iostream>
#include<vector>
using namespace std;

#define forn(i,n) for(int i=0; i<n; i++)

void input_arr(vector<int,int> arr){
    forn(i,arr.size()){
        cin>>arr[i];
    }
}

void print(vector<int,int> arr){
        forn(i,arr.size()){
        cout<<arr[i];
    }
}

int solve(vector<int,int> arr){
    
}

int main(){
    int size;
    cin>>size;
    vector<int,int> v;

    input_arr(v);
    //solve(v);
    print(v);

}