#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    string str;cin >> str;
    int ans = INT_MIN;
    for(int i=0;i<str.size();i++){
        char c = str[i];
        int x = 0;
        while(i<str.size() && str[i] == c){
            x++;if(str[i+1] == c)i++;else break;
        }
        ans = max(ans,x);
    }
    cout << ans;
    return 0;
}