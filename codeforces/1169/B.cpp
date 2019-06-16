#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 3 * 1e5 + 10;

ll res;
ll a[N] , b[N], n;

void GONE(ll x, ll y){
    for(int i = 0 ; i < n ; i ++){
        if(a[i] != x && b[i] != y && a[i] != y && b[i] != x)
            return;
    }
    cout<<"YES";
    exit(0);
}

void gone(ll num){
    for (int i = 0; i < n; ++i)
    {
        if(num == a[i] || num == b[i])
            continue;
        else{
            GONE(num, a[i]);
            GONE(num, b[i]);
            return;
        }
    }
        cout<<"YES";
        exit(0);
}

void solve(){
    ll m;
    cin>>m>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i]>>b[i];
    }
    gone(a[0]);
    gone(b[0]);
    cout<<"NO";
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