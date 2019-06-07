#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

bool check(ll x){
    if(x < 2)
        return false;
    for( ll i = 2 ; i*i <= x ;i++ ){
        if(x % i == 0)
            return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    if( (ll)sqrtl(n) * (ll)sqrtl(n) == n){
        if(check(sqrtl(n))){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else
        cout<<"NO\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}