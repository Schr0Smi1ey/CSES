#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    int n,m,k;cin >> n >> m >> k;
    int arr[n],brr[m];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for(int j = 0;j < m;j++){
        cin >> brr[j];
    }
    sort(arr,arr + n);
    sort(brr,brr + m);
    int ans = 0,i = 0,j = 0;
    while(i < n && j < m){
        if(abs(arr[i]-brr[j]) <= k){
            i++;j++;ans++;
        }
        else if(arr[i] > brr[j]) // Will try the next apartment
            j++;
        else 
            i++; // this applicants can never be get an apartment
    }
    cout << ans;
    return 0;
}
