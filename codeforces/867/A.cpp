#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , sf = 0, fs = 0;
    char a[1001];
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        if(a[i] == 'S' && a[i + 1] == 'F')
            sf++;
        else if(a[i] == 'F' && a[i + 1] == 'S')
            fs++;
        else
            continue;
    }

    if(sf > fs)
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