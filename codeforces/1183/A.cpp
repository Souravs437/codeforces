#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

ll bac_h(ll n) {

    ll sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void solve(){
    ll n;
    cin>>n;
    ll temp = n;
    while(bac_h(n) % 4) n++;

    cout<<n;
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