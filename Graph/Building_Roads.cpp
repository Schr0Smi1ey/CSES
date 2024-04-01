#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int n,m;
const int N = 2e5 + 5;
vector<int> adj[N];
bool vis[N];
void read_graph()
{
    cin >> n >> m;
    while(m--)
    {
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void dfs(int src)
{
    vis[src] = true;

    for(auto v : adj[src])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }
}
signed main()
{
    fastio;
    read_graph();
    vector<int> v;
    for(int i=1 ;i <=n;i++)
    {
        if(!vis[i])
        {
            v.push_back(i);
            dfs(i);
        }
    }
    cout << v.size() - 1 << endl;
    for(int i=0;i<v.size()-1 ;i++)
    {
        cout << v[i] << " " << v[i+1] << endl;
    }
    return 0;
}