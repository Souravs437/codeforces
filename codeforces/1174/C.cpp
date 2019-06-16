#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res = 0;
ll a[N] = {0};


void solve(){
    ll n;
    cin>>n;
    for (int i = 2; i <= n; ++i)
    {
        if(a[i] == 0){
            res++;
            for (int j = i; j  <= n; j += i)
            {
                a[j] = res;
            }
        }
    }
    for (int i = 2; i <= n; ++i)
    {
        cout<<a[i]<<" ";
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