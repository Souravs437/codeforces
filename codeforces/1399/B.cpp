#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;

const int N = 2 * 1e5 + 10;
const ll inf = 9e18 + 9; 

ll res;
ll a[N];


void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n) , brr(n);
    ll ma = INT_MAX, mb = INT_MAX;
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
        ma = min(arr[i] , ma);
    }
    for(int i = 0; i < n ; i++) {
        cin>>brr[i];
        mb = min(brr[i] , mb);
    }

    ll ans = 0;
    for(int i = 0; i < n ;i ++) {
        ll diffa = abs(ma - arr[i]);
        ll diffb = abs(mb - brr[i]);
        ll val = min(diffa , diffb);
        ans += val;
        diffa -= val;
        diffb -= val;
        ans += diffa + diffb;
    }
    cout<<ans<<'\n';
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