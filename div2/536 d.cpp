#include <bits//stdc++.h>
using namespace std;

vector<int> G[100002]; // adjacency matrix
bool seen[100002]; // which vertices have been visited by dfs()
int n,e; // number of vertices

void dfs(int u)
{
    seen[u] = true;
    printf("%d ", u);
    for(int v = 0; v < G[u].size(); v++)
        if(!seen[v] && G[u][v]) dfs(v);
}

int main()
{
    scanf("%d %d", &n,&e);
    int tm;
    for(int i=1; i<=e; i++) {

        scanf("%d", &tm);
    G[i].push_back(tm);
    }
 /*  for(int p=0;p<100002;p++)
       sort(G[p].begin(),G[p].end());

    for(int i=0; i<=100002; i++) seen[i] = false;

    dfs(1);*/
    return 0;
}
