#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll fl;
    cin>>fl;
    for (int i = 0; i < fl; ++i)
    {
        cin>>a[i];
    }
    sort(a, a+fl);
    ll ub, lb;
    lb = a[0];
    ub = a[fl - 1];
    ll a2 = count(a, a+fl, lb);
    ll b = count(a, a+fl, ub);
    if(lb == ub)
        a2 = a2*(a2 - 1 ) / 2;
    else
        a2 = a2*b;
    cout<<ub - lb<<" "<<a2;
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