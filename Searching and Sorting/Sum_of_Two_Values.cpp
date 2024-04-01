#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
typedef pair<int,int> pii;
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 2e5 +5;

void solution(){
    int n,x;cin >> n >> x;
    pair<int,int> p[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> p[i].first;
        p[i].second = i+1;
        mp[p[i].first] = p[i].second;
    }
    for(int i=0;i<n;i++){
        int temp = x - p[i].first;
        if(mp[temp] && (p[i].second != mp[temp])){
            cout << i+1 << " " << mp[temp];
            return ;
        }
    }
    cout << "IMPOSSIBLE" ;
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}