#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll dis = 0, res = 0 ;
    for (int i = 0; i < 3; ++i)
    {
        cin>>a[i];
    }

    sort(a , a+3);

    cout<<a[2] - a[0];

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