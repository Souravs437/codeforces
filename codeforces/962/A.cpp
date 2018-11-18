#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n ,sum = 0 ;
    pair <ll , int> x;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        sum += a[i];
    }
    x.first = sum/2;
    for (int i = 0; i < n; ++i)
    {
        sum -=a[i];
        if(x.first >= sum){
            x.second = i+1;
            break;
        }
    }
    cout<<x.second;
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