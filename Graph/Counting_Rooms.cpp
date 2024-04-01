#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N = 1e3 + 5;
char str[N][N];
bool visited[N][N];
int drow[] = {-1,0,1,0};
int dcol[] = {0,1,0,-1};
void read_matrix()
{
    cin >> n >> m;
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> str[i][j];;
        }
    }
}
bool is_valid(int i,int j)
{
    return (i>=0 && i<n && j >=0 && j < m && str[i][j] != '#');
}
void dfs(int si,int sj)
{
    visited[si][sj] = true;

    for(int i=0;i<4;i++)
    {
        int nRow = si + drow[i];
        int nCol = sj + dcol[i];
        if(is_valid(nRow,nCol) && !visited[nRow][nCol])
        {
            dfs(nRow,nCol);
        }
    }
}
signed main()
{
    read_matrix();
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j] && str[i][j] != '#')
            {
                cnt++;
                dfs(i,j);
            }
        }
    }
    cout << cnt;
    return 0;
}