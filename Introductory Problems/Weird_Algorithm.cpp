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
    while(n){
        if(n&1){
            cout << n << " ";
            if(n == 1) break;
            n = (3*n + 1);
        }
        else{
            cout << n << " ";
            n /= 2;
        }
    }
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