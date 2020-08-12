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
    ll n , m , l , r;
    cin>>n>>m>>l>>r;
    cout<<l<<" "<<r<<"\n";
    for(int i = 1; i <= m ; i++) {
        if(i == r) continue;
        cout<<l<<" "<<i<<"\n";
    }
    bool fl = 1;
    for(int i = 1; i <= n ; i++) {
        if(i == l) continue;
        if(fl) {
            for(int j = m ; j >= 1; j--) {
                cout<<i<<" "<<j<<"\n";
            }
            fl = !fl;
        } else {
            fl = !fl;
            for(int j = 1; j <= m; j++) {
                cout<<i<<" "<<j<<"\n";
            }
            fl != fl;
        }
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