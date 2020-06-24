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
ll bit[N*10][2];

void upd(ll idx , ll tt , ll val) {
    while(idx < N*6) {
        bit[idx][tt] += val;
        idx += (idx) & (-idx);
    }
}

ll sum(ll idx , ll tt) {
    ll val = 0;
    while(idx > 0) {
        val += bit[idx][tt];
        idx -= (idx) & (-idx);
    }
    return val;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    vector<ll> temp(n);
    unordered_map<ll,ll> mp;
    for(int i = 0; i < n ; i++) {
        cin>>arr[i];  
        temp[i] = arr[i];
    }

    sort(temp.begin() , temp.end());

    ll val = 1;
    for(int i = 0; i < n ; i++) {
        mp[temp[i]] = val++;
    }
    for(int i =0 ; i < n ; i++) {
        arr[i] = mp[arr[i]];
    }

    for(int i = 0; i < n ; i++) {
        upd(arr[i] , 0 , 1);
    }
    ll ans = 0;
    for(int i = 0; i < n ; i++) {
        upd(arr[i] , 0 , -1);
        upd(arr[i] , 1 , 1);
        ll sum1 = sum(n+2 , 1) - sum(arr[i] , 1);
        ll sum2 = sum(arr[i] - 1 , 0);
        ans += sum1*sum2;
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