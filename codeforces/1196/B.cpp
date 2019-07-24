#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, k, count(0) ;
    vector<ll> v;
    cin>>n>>k;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        if(a[i] % 2 != 0) {
            count++;
            v.push_back(i + 1);
        }
    }
    ll x = v.size();
    if(x - k < 0 || x % 2 != k % 2) {
        cout<<"NO"<<"\n";
        return;
    }
    ll flag = count - k + 1;
    if(flag % 2 == 0){
        cout<<"NO"<<"\n";
        return;
    }
    if(count >= k) {
        cout<<"YES"<<"\n";
        for (int i = 0; i < k - 1; ++i)
        {
            cout<<v[i]<<" ";
        }
        cout<<n;
        cout<<"\n";
    }
    else {
        cout<<"NO"<<"\n";
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}