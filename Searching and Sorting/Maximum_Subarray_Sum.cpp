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
const int INF = 1e18,MINF = -1e18;
const int N = 2e5 +5;

void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int sumEndingHere = arr[0], sumSoFar = MINF;
    for(int i=1;i<n;i++){
        sumEndingHere = max(arr[i],sumEndingHere + arr[i]);
        sumSoFar = max(sumSoFar,sumEndingHere);
    }
    sumSoFar = max(sumSoFar,sumEndingHere);
    cout << sumSoFar << endl;
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