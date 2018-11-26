#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll a, b, n, i = 0, temp;
    cin>>a>>b>>n;
    while(n > 0)
    {
        temp = __gcd(a,n);
        n -= temp;
        swap(a,b);
        i++;
    }
    if(i % 2 == 0)
        cout<<1;
    else
        cout<<0;
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