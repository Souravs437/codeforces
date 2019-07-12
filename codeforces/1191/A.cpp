#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, count = 0;
    ll x = 'A';
    cin>>n;
    ll rem = n % 4;
    if(rem==1) 
        cout<<0<<" "<<"A";
    if(rem==3) 
        cout<<2<<" "<<"A";
    if(rem == 2) 
        cout<<1<<" "<<"B";
    if(rem == 0) {
        cout<<"1"<<" "<<"A";
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