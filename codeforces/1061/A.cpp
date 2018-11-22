#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , s, ans;
    cin>>n>>s;
    if( n < s){
        ll temp = s / n;
        if( s %n !=0)
            ans = temp + 1;
        else
            ans = temp;
    }
    else if( s > 0)
        ans = 1;
    else 
        ans = 0;
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