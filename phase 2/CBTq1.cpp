#include<iostream>
using namespace std;

int max_arr(int arr[],int n){
    int max=0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<max_arr(arr, 10);
    return 0;
}