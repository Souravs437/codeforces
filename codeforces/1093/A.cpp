#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll query;
    cin>>query;
    for (int i = 0; i < query; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < query; ++i)
    {
        if(a[i] <= 7)
            cout<<1<<"\n";
        else
        {
            ll x = a[i]/7;
            if(a[i] % 7 != 0)
                x += 1;
            cout<<x<<"\n";
        }
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