#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
typedef map<int, vector<int>> mivi;
typedef vector<vector<int>> vvi;
typedef vector<int> vi;

vvi adj_list(int n, vvi edges){
    vvi adjList(n,vi(n));
    for(vi edge : edges){
        if(edge[0] !=edge[1])
            adjList[edge[0]].push_back(edge[1]);  
        adjList[edge[1]].push_back(edge[0]);
    }
    return adjList;
}

vvi make_adj_matrix(int n, vvi edges){
    vvi adj_matrix(n,{n,0});
    for(vi edge : edges){
        adj_matrix[edge[0]][edge[1]]=1;  
        adj_matrix[edge[1]][edge[0]]=1;  
    }
    return adj_matrix;
}



int graph(){
    int n=7;
    vvi edges{{0,1},{0,2},{0,3},{1,4},{1,5},{2,5},{3,4},{6,6}};
    //mivi adj_list= make_adj_list(n,edges);
    cout<<"\n";
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    graph();
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<nanoseconds>(stop - start);
    // cout << duration.count() << "\n";
}