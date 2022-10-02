#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool vts[N];
void DFS(int vertex)
{
    vts[vertex] = true;
    cout << vertex << endl;
    for (int child : g[vertex])
    {
        if (vts[child])
            continue;
        DFS(child);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    DFS(1);
    return 0;
}
