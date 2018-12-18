#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

int count_bit(ll x)
{
    int count = 0;
    while(x > 0)
    {
        if(x&1)
            count++;
        x = x>>1;
    }
    return count;
}


void solve(){
    ll x, ans;
    cin>>x;
    ans = count_bit(x);
    cout<<ans;
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