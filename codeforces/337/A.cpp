#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , pz, ltd=10000000;
    cin>>n>>pz;
    for (int i = 0; i < pz; ++i)
    {
        cin>>a[i];
    }
    sort(a,a+pz);
    if(n==pz)
        ltd=a[n-1]-a[0];
    else
        for (int i = 0 ; i < pz-n+1 ; ++i)
        {
            ll temp = a[i+n-1]-a[i];
            if(temp<ltd)
                ltd=temp;
        }
    cout<<ltd;
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