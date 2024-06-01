#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
}

int mode(int arr[], int size){
    int mode=0;
    int count=0;
    int max_count= count;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>max_count){
                max_count= count;
            mode= a[i];
            }
        }

    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    mode(arr, size);
    print(arr,6);
    
    
}