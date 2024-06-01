#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

int solve()
{
    vector<int> h={4,3,2,3,4};
    int n= h.size();
    vector<int> lspan(n), rspan(n);
    //lspan
    for (int i = 0; i < n; ++i) {
        lspan[i] = 1; 
        for (int j = i - 1; j >= 0 && h[j] >= h[i]; j--) {
            lspan[i] += lspan[j];
        }
    }
    //rspan
    for (int i = n - 1; i >= 0; --i) {
        rspan[i] = 1; 
        for (int j = i + 1; j < n && h[j] >= h[i]; j++) {
            rspan[i] += rspan[j];
        }
    }
    int maxArea=0;
    for (int i = 0; i < n; ++i) {
        int area = (h[i]) * (lspan[i] + rspan[i] -1);
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout<<solve();
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<nanoseconds>(stop - start);
    // cout << duration.count() << "\n";
}