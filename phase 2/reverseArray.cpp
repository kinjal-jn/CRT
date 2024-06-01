#include<iostream>
#include<vector>
#include<map>

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int,int> mii;
#define pb push back
#define mp make_pair
#define forn(i,n) for (int i = 0; i<n; i++)



void find_mode()
{
    int count=1;
    int max_count = count,mode=0;
    forn(i,n){
        for(int j=i+1;j<n;j++){
            if(a[i] == a[j])
            {
                count++;
            }
        }
        if(count>max_count){
            max_count = count;
            mode = a[i];
        }
        // max_count = max(count,max_count);
        count=1;
    }
    cout<<mode<<"\n";
}
void print_array(int *a,int n)
{
    forn(i,n)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void solve()
{
    int n;
    cin>>n;
    int a[n];
    forn(i,n)
    {
        cin>>a[i];
    }
    find_mode(a,n);
    // print_array(a,n);  


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

}