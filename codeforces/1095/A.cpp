#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    char s[1001];
    ll n, k = 0;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cin>>s[i];
    }
    for (int i = 1; i <= n; i += k)
    {
        cout<<s[i];
        k++;
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