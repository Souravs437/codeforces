#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

ll countbit( ll n)
{
    ll count = 0;
    while(n){
        count += (n&1);
        n = n>>1;
    }
    return count;
}

void solve(){
    ll t ;
    cin>>t;
    while(t--)
    {
        ll n, ans;
        cin>>n;
        ans = countbit(n);
        cout<<(1<<ans)<<"\n";
    }
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