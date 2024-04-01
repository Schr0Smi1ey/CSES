#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    int n,q;cin >> n >> q;
    int arr[n+5][n+5];
    fill_n((int*)arr,(n+5)*(n+5),0);
    for(int i = 1;i <= n;i++){
        string str;cin >> str;
        for(int j = 1;j <= n;j++){
            arr[i][j] = (str[j-1] == '*') + arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
        }
    }

    while(q--){
        int u,l,d,r;cin >> u >> l >> d >> r;
        cout << arr[d][r] - arr[u-1][r] - arr[d][l-1] + arr[u-1][l-1] << endl;
    }
    return 0;
}
