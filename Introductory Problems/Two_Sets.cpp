#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

void solution(){
    int n;cin >> n;
    int p = (n*(n+1))/2;
    if(p & 1){
        cout << "NO";return;
    }
    vector<int> a,b;
    bool flag = true;
    for(int i = n;i > 0;){
        if(flag){
            if(i) a.push_back(i);i--;
            if(i) b.push_back(i);i--;
            flag = false;
        }
        else{
            if(i)b.push_back(i);i--;
            if(i)a.push_back(i);i--;
            flag = true;
        }
    }
    cout << "YES" << endl;
    cout << a.size() << endl;
    for(auto x : a){
        cout << x << " ";
    }
    cout << endl << b.size() << endl;
    for(auto x : b){
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