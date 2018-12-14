#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, count = 0, max = 0;;
    cin>>n;
    cin>>a[0];
    max = a[0];
    for (int i = 1; i < n; ++i)
    {
        cin>>a[i];
        if(max < a[i])
            max = a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if(a[i] < max)
            count += max - a[i];
        else
            continue;
    }
    cout<<count;
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