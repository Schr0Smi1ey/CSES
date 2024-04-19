#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
        tree_order_statistics_node_update>;


void solution() {
    int n,q;cin >> n >> q;
    map<int,int> mp;
    for(int i = 0,x;i < n;i++){
        cin >> x;
        mp[x]++;
    }
    while(q--){
        int x;cin >> x;
        auto it = mp.upper_bound(x);
        if(it == mp.begin()){
            cout << -1 << endl;
        }
        else{
            it--;
            cout << it->first << ' ';
            it->second -= 1;
            if(it->second == 0)
                mp.erase(it);
        }
    }
}

int32_t main() {
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
