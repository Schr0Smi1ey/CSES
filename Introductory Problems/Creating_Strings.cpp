#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

void solution(){
    string str;cin >> str;
    sort(str.begin(),str.end());
    set<string> st;
    do{
        st.insert(str);
    }
    while(next_permutation(str.begin(),str.end()));
    cout << st.size() << endl;
    for(auto s : st){
        cout << s << endl;
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