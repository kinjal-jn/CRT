#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n & 1) {
        count++;
    }
    return count;
}
 
int arrays(vector<int> arr){
    int result=0;
    for(int x:arr){
        result^=x;
    }
    return result;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    countSetBits(12);
   
}