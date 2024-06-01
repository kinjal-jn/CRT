#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int toh(int n){
    if(n=1){
        return 1;
    }
    return 2*toh(n-1)+1;

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; 
    cin>>n;
    cout<<toh(n);
    return 0;
}
