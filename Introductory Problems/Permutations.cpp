#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

void solution(){
    int n;cin >> n;
    int arr[n],even,odd;
    if(n&1){even = n-1,odd = n;}
    else {even = n,odd = n-1;}
    for(int i=0,x = 2,y = 1;i<n;i++){
        if(x <= even){
            arr[i] = x;
            x += 2;
        }
        else{
            arr[i] = y;
            y += 2;
        }
        if(i && (abs(arr[i] - arr[i-1]) == 1)){
            cout << "NO SOLUTION";
            return;
        }
    }
    for(auto x : arr){
        cout << x << " ";
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