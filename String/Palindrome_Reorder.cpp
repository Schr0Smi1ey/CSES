#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    string str;cin >> str;
    int arr[26] = {0};
    for(int i=0;i<str.size();i++){
        arr[str[i]-'A']++;
    }
    int cnt = 0;bool flag = false;
    for(int i=0;i<26;i++){
        if(arr[i] & 1){
            flag = true;
            cnt++;
        }
        if(cnt >1){
            cout << "NO SOLUTION";
            return 0;
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i] % 2 == 0){
            for(int j=0;j<arr[i]/2;j++){
                cout << (char)(i + 'A');
            }
        }
    }
    if(flag){
            for(int i=0;i<26;i++){
            if(arr[i]&1){
                for(int j=0;j<arr[i];j++)
                cout << (char)(i + 'A');
            }
        }
        for(int i=25;i>=0;i--){
            if(arr[i] % 2 == 0){
                for(int j=0;j<arr[i]/2;j++){
                    cout << (char)(i + 'A');
                }
            }
        }
    }
    else{
        for(int i=25;i>=0;i--){
            if(arr[i] % 2 == 0){
                for(int j=0;j<arr[i]/2;j++){
                    cout << (char)(i + 'A');
                }
            }
        }
    }
    return 0;
}
