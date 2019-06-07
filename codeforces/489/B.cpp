#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N] , b[N];


void solve(){
    ll n, m, count(0);
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    cin>>m;
    for (int i = 0; i < m; ++i)
    {
        cin>>b[i];
    }
    sort(a , a+n);
    sort(b , b+m);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(abs(a[i] - b[j]) < 2){
                count++;
                b[j] = N;
                break;
            }
            else
                continue;
        }
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