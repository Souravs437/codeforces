#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll x, sum = 0, i = 0,j = 1, check = 0 ;
    cin>>x;
    for ( i = 1; x >= check ; ++i)
    {
        sum++;
        j = i*(i+1)/2;
        x -= j;
        check = (i+1)*(i+2)/2;
    }
    cout<<sum;
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