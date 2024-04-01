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
    int n;cin >> n;
    int ans = 0;
    for(int i=1;i<n;i++){
        int x;cin >> x;
        ans ^= (x^i);
    }
    cout << (ans ^ n);
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    while(t--){
        solution();
    }
    return 0;
}