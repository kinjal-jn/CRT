#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define forn(i,n) for(i=0; i<n; i++)

void input_arr(vector<int>& arr, int n){
    int i;
    forn(i,n){
        cin >> arr[i];
    }
}

void print(const vector<int>& arr){
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
}

vector<int> solve(const vector<int>& a, const vector<int>& b){
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
    vector<int> ans;
    while(i < n && j < m){
        if(a[i] < b[j]){
            ans.push_back(a[i]);
            i++;
        } else {
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i < n) {
        ans.push_back(a[i]);
        i++;
    }

    while(j < m) {
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}

int main(){
    int size, size2;
    
    cout << "Arr1 size: ";
    cin >> size;
    vector<int> arr(size);
    input_arr(arr, size);
    
    cout << "Arr2 size: ";
    cin >> size2;
    vector<int> arr2(size2);
    input_arr(arr2, size2);
    
    vector<int> arrres = solve(arr, arr2);
    copy(arrres.begin(),
         arrres.end(),
         ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
