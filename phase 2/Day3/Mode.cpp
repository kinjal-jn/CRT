#include<iostream>
#include <map>
#include<vector>
using namespace std;

#define forn(i,n) for(int i=0; i<n; i++)
#define mii map<int, int>
#define vi vector<int>
# define it vector<int>::iterator 



void input_vector(vi v){
    
    for(it i=v.begin(); i < v.size(); i++){
        cin>>v;
    }
}

void print(vi &v){
    for(int x : v){
        cout<<x;
    }
}

int solve(){
    
}

int main(){
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}