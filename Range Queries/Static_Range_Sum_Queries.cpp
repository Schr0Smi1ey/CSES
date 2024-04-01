#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,q;cin >> n >> q;
    int arr[n+1];
    arr[0] = 0LL;
    for(int i = 1;i <= n; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    while(q--){
        int l,r;cin >> l >> r;
        cout << arr[r] - arr[--l] << endl;
    }
}

int32_t main(){
    fastio;
    int t = 1;
    while(t--){
        solution();
    }
    return 0;
}