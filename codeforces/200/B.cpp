#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n;
    double a[N];
    double sum = 0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        sum += (double)(a[i]/100);
    }
    sum /= n;
    sum *= 100;
    cout<<fixed<<setprecision(7)<<sum;
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