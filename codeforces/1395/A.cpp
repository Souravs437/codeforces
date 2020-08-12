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
    ll r, b , g, w;
    cin>>r>>b>>g>>w;
    ll cnt = 0;
    if(r%2) cnt++;
    if(b%2) cnt++;
    if(g%2) cnt++;
    if(w%2) cnt++;
    if(cnt <= 1) {
        cout<<"Yes\n";
        return;
    }
    if((r&&b&&g) == 0) {
        cout<<"No\n";
        return;
    }

    if(w%2) {
        cnt--;
        if(cnt >= 2) {
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
        }
    } else {
        if(cnt == 3) {
            cout<<"Yes\n";
        } else {
            cout<<"NO\n";
        }
    }
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