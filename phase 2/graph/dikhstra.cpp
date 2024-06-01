#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
typedef vector<vector<int>> vvi;
typedef vector<int> vi;

vvi adj_list(int n, vvi edges) {
    vvi adjList(n);
    for (vi edge : edges) {
        if (edge[0] != edge[1]) {
            adjList[edge[0]].push_back(edge[1]);
        }
        adjList[edge[1]].push_back(edge[0]);
    }
    return adjList;
}

vvi dikstra(vvi adjList){
    vvi stack;
    
}

void graph() {
    int n = 7;
    vvi edges{{0, 1}, {0, 2}, {0, 3}, {1, 4}, {1, 5}, {2, 5}, {3, 4}, {6, 6}};
    vvi adjList = adj_list(n, edges);
    dikstra(adjList);
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    graph();
    return 0;
}
