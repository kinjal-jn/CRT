#include<iostream>
#include<string>
#include<algorithm>

#include<math.h>
using namespace std;

bool isPalindrome(const string &text, int start, int end){
    if(start>=end){
        return true;
    }
    if(text[start] != text[end]){
        return false;
    }
    return isPalindrome(text, start+1, end-1);
}

int main(){
    string text;
    cout<<"Enter text: ";
    cin>>text;
    cout<<"Palindrome? ";
    int ans= isPalindrome(text, 0, text.length()-1);
    cout<<ans;
}

