#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N] = {0};


void solve(){
    ll val256 = 0, val32 = 0;
    for (int i = 0; i < 4; ++i)
    {
        cin>>a[i];
    }
    ll temp = min(a[0], min(a[2],a[3]));
    a[0] -= temp;
    a[2] -= temp;
    a[3] -= temp;
    val256 = temp;
    temp = min(a[0] , a[1]);
    val32 = temp;
    ll sol = val256*256 + val32* 32;
    cout<<sol;
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