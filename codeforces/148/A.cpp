#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll k , l , m, n ,count =0;
    ll tot;
    cin>>k>>l>>m>>n>>tot;
    for (ll i  = tot  ; i > 0; --i)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
            count++;
    }
    cout<<count;
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