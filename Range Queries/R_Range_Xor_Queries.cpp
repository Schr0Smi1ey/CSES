#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n,q;cin >> n >> q;
    int arr[n+1];
    arr[0] = 0;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
        if(i > 0)
        arr[i] = arr[i]^arr[i-1];
    }
    while(q--)
    {
        int l,r;cin >> l >> r;
        cout << (arr[r]^arr[l-1]) << endl;
    }
    return 0;
}