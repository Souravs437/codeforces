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
    vector<int> arr(n);
    for(int i = 0; i < n ; i++) {
        arr[i] = 9;
    }
    ll cnt = n;
    for(int i = n-1; i >= 0 ; i--) {
        if(cnt <= 0) {
            break;
        }
        if(cnt > 4) {
            arr[i] = 8;
            cnt -= 4;
            continue;
        }
        if(cnt > 0) {
            arr[i] = 8;
            cnt = 0;
            continue;
        }
    }
    for(auto i : arr) {
        cout<<i;
    }
    cout<<"\n";
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