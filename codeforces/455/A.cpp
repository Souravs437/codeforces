#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    vector <ll> dp(100000, 0);
    ll n, x;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        dp[x]++;
    }
    for (int i = 2; i < 100001; ++i)
    {
        dp[i] = max(dp[i-1] , dp[i]*i + dp[i -2]);
    }
    cout<<dp[100000];
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}



