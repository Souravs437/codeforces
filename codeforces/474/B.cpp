#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    vector<ll> a;
    ll n , sum = 0, x, b[N];
    cin>>n;
    for (int i = 0; i < n; ++i)
      {
          cin>>x;
          a.push_back(x + sum);
          sum = a[i];
      }
    sort(a.begin() , a.end());
    ll m;
    cin>>m;
    for (int i = 0; i < m; ++i)
        {
            cin>>b[i];
        }
    for (int i = 0; i < m; ++i)
        {
            ll ans;
            ans = lower_bound(a.begin() , a.end(), b[i]) -a.begin();
            cout<<ans+1<<" \n";
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