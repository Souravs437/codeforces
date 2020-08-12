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

ll res= inf;
ll a[N];
ll n , m;
vector<ll> arr, brr;
ll dp[209][2000];
ll go(ll idx , ll val) {
    if(idx == n) {
        return val;
    }
    if(dp[idx][val]+1) {
        return dp[idx][val];
    }
    ll ans = INT_MAX;
    for(int i = 0 ; i < m ; i++) {
        ll xx = arr[idx] & brr[i];
        ans = min(ans , go(idx + 1, xx |val));
    }

    return dp[idx][val] = ans;
}

void solve(){
    cin>>n>>m;
    memset(dp , -1, sizeof dp);
    arr.resize(n), brr.resize(m);
    for(int i = 0; i < n ; i++) {
        cin>>arr[i];
    }
    for(int j = 0; j < m ; j++) {
        cin>>brr[j];
    }

    cout<<go(0,0)<<"\n";
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