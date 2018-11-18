#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, x, y ,temp;
    cin>>n;
    if(n % 2 == 0){
        x = 4;
        y = n - 4;
        cout<<x<<" "<<y;
    }
    else{
        x = 9;
        y = n - 9;
        cout<<x<<" "<<y;

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