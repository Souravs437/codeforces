#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , m;
    cin>>n;


    m = n / 2 + 1;

    cout<<m<<"\n";

    for (int i = 0; i < n; ++i)
    {
        cout<< (i + 2) / 2 <<" "<< (i + 3) / 2<<"\n";
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