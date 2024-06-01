#include<iostream>
#include<string>
using namespace std;

void reverse_string(string &text, int start, int end){
    if(start>=end){
        return;
    }
    else{
        swap(text[start],text[end]);
        reverse_string(text, start+1, end-1); //tail recursion
    }
}

int main(){
    string text;
    cout<<"Enter text: ";
    cin>>text;
    reverse_string(text, 0, text.length()-1);
    cout<<"Reversed text: ";
    cout<<text;
    return 0;
    
}