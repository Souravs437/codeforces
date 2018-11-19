#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n;
    cin>>n;
    bool flag = false;
    for (ll i = 2; i * i <= n; ++i)
    {
        if ( n % i == 0){
            ll x = ( n - i)/2 + 1;
            cout<<x;
            flag = true;
            break;
        }
        else 
            continue;
    }
    if(!flag)
        cout<< 1;

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