#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int moves = 0LL;
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            moves += (abs(arr[i]-arr[i-1]));
            arr[i] = arr[i-1];
        }
    }
    cout << moves;
}
int32_t main(){
    fastio;
    int t = 1;
    while(t--){
        solution();
    }
    return 0;
}