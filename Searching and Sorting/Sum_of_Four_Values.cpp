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
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 2e5 +5;

void solution(){
    int n,x;cin >> n >> x;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr,arr+n);
    for(int i = 0;i < n; i++){
        int temp = x;
        temp -= arr[i].first;
        for(int j = i+1;j<n;j++){
            temp -= arr[j].first;
            for(int l = j + 1,r = n-1;l < r;l++){
                while(l + 1 < r && (arr[l].first + arr[r].first) > temp) r--;
                if(arr[l].first + arr[r].first == temp){
                    cout << arr[i].second << " " << arr[j].second << " " << arr[l].second << " " << arr[r].second ;
                    return ;
                }
            }
            temp = x - arr[i].first;
        }
    }
    cout << "IMPOSSIBLE";
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