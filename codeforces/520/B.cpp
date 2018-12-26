#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

ll count_(ll n, ll m)
{
    if(n >= m)
    {
        return n - m;
    }
    else if(m % 2 == 0)
    {
        return 1+count_(n , m/2);
    }
    else
    {
        return 2+count_(n , (m+1)/2);
    }
}

void solve(){
    ll n, m, ans;
    cin>>n>>m;
    ans = count_(n , m);
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