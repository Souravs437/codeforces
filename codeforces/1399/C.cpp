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
    vector<ll> arr(n);
    for(int i = 0; i < n ; i++) {
        cin>>arr[i];
    }
    ll ans = 0 , curr = 0;
    for(int i = 2;  i <= 2*n ; i++) {
        map<int,int> mp;
        ans = 0;
        for(int j = 0; j < n ; j++) {
            mp[arr[j]]++;
        }
        for(int j = 0; j < n ; j++) {
            if(i-arr[j] == arr[j]) {
                if(mp[arr[j]] > 1) {
                    ans++;
                    mp[arr[j]] -= 2;
                    if(mp[arr[j]] == 0) {
                        mp.erase(arr[j]);
                    }
                }
                continue;
            }
            if(mp.count(i - arr[j]) && mp.count(arr[j]) && (i - arr[j] != arr[j])) {
                ans++;
                mp[i-arr[j]]--;
                mp[arr[j]]--;
                if(mp[i-arr[j]] == 0) {
                    mp.erase(i-arr[j]);
                }
                if(mp[arr[j]] == 0) {
                    mp.erase(arr[j]);
                }
            } else {
                if(mp[arr[j]] > 1) {
                    mp[arr[j]]--;
                } else {
                    mp.erase(arr[j]);
                }
            }
        }

        curr = max(ans, curr);
    }
    cout<<curr<<"\n";
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