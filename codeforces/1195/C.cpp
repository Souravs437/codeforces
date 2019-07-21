#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];
ll b[N];

void solve(){
    ll n ; 
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin>>b[i];
    }

    for (int i = n - 2; i >= 0; --i)
    {
        a[i] = max(a[i] + b[i+1] , a[i + 1]);
        b[i] = max(b[i] + a[i + 1] , b[i + 1]);
    }
    cout<<max(a[0] , b[0]);
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