#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n,s;
    cin>>s>>n;
    pair <ll,ll> x[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>x[i].first>>x[i].second;
    }
    sort(x, x+ n);

    for (int i = 0; i < n; ++i)
    {
        if(s <= x[i].first){
            cout<<"NO";
            break;
        }
        else
            s += x[i].second;
    }
    if(s > x[n-1].first)
        cout<<"YES";
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