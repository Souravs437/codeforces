#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , count = 0 , ava = 0 , dis = 0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if(a[i] > 0)
            ava += a[i];
        if(ava == 0 && a[i] < 0)
            count++;
        if(ava > 0 && a[i] < 0 )
            ava += a[i];
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