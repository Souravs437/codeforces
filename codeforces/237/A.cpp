#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll hr[24][60] = {0} , n, ans = 0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        ll h , min;
        cin>>h>>min;
        hr[h][min]++;
    }

    for (int i = 0; i < 24; ++i)
    {
        for (int j = 0; j < 60; ++j)
        {
            ans = max(ans , hr[i][j]);
        }
    }

    cout<<ans<<"\n";
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