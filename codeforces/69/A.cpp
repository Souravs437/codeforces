#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll x[100] , y[100] , z[1000] , s1 = 0 , s2 = 0 ,s3 = 0;
    ll n;
    cin>>n;
    for (int i = 0; i < n ; ++i)
    {
        cin>>x[i];
        s1 += x[i];
        cin>>y[i];
        s2 += y[i];
        cin>>z[i];
        s3 +=z[i];
    }
    if(s1 == 0 && s2 == 0 && s3 == 0)
        cout<<"YES";
    else
        cout<<"NO";
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