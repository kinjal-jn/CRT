#include<iostream>
#include<vector>
using namespace std;

#define forn(i,n) for(int i=0; i<n; i++)

void input_arr(vector<int,int> v){
    forn(i,v.size()){
        cin>>v[i];
    }
}

void print(vector<int,int> v){

    forn(i,v.size()){
        cout<<v[i];
    }
}

void solve(vector<int,int> v){
    cout<<"hi\n";
}

int main(){
    int size;
    cin>>size;
    vector<int,int> v(size);

    input_arr(v);
    solve(v);
    print(v);

}