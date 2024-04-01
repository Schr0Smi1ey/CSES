#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n,x;cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int j=0,cnt = 0,sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        while(sum >= x)
        {
            if(sum == x)
            cnt++;
            sum -= arr[j++];
        }
    }
    cout << cnt << endl;
    return 0;
}