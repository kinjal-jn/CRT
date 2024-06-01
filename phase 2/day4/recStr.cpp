#include<iostream>
#include<string>
using namespace std;

#define forn(i,n) for(i=0; i<n; i++)


int solve(string s){
    if(s.length()<2){
        return true;
    }
    if(s[0] != s.length()-1){
        return false;
    }
    return solve(s.substr(1,s.length()-2));
}

int main(){
    int size;
    string s;
    cin>>s;
    cout<<solve(s);
   

}