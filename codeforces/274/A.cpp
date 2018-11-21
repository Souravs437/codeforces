#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, k ;
    set <ll> s;
    cin>>n>>k;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for (int i = 0; i < n; ++i)
    {
        if(s.count(a[i]) == 0 )
            s.insert(a[i]*k); 
        else
            continue;
    }
    cout<<s.size();
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