#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, dif ,len;
    cin>>n>>len;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a, a +n);
    dif = max(a[0] ,len - a[n-1])*2;
    for (int i = 1; i < n; ++i)
    {
        dif = max(dif, a[i] - a[i -1]);
    }
    cout<<fixed<<setprecision(9)<<(double)dif/2;
    
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