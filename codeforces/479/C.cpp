#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve() {
    ll n;
    cin>>n;
    vector<vector<ll>> v(n);
    for(int i = 0 ; i < n ; ++i) {
        ll x , y;
        cin>>x>>y;
        v[i].push_back(x);
        v[i].push_back(y);
    }

    sort(v.begin() , v.end());

    for(int i = 1; i < n ; i++) {
        if(v[i][1] < v[i-1][1]) {
            swap(v[i][0] , v[i][1]);
        }
    }

    cout<<v[n-1][1];
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