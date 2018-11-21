#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, m, temp; 
    cin>>n>>m;
    if(n >= m){
        for (int i = 1; n >= i*m ; ++i)
        {
            n++;
        }
        cout<<n;
    } 
    else
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