#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , mid,ans , k;
    cin>> n>>k;
    if(n%2==0)
    {
        mid = n/2;
    }
    else
    {
        mid = n/2 + 1;
    }
    if(k <= mid)
        ans = 1 + (k-1)*2;
    else
    {
        k -= mid;
        ans = 2 + (k - 1)*2;
    }
    cout<<ans;

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