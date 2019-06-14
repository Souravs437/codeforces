#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll len;
    bool type[2] = {0};
    cin>>len;
    for (int i = 0; i < len; ++i)
    {
        cin>>a[i];
        type[ a[i] % 2] = 1;
    }
    if(type[0] && type[1]){
        sort(a , a + len);
        for (int i = 0; i < len; ++i)
        {
            cout<<a[i]<<" ";
        }
    }
    else
        for (int i = 0; i < len; ++i)
        {
            cout<<a[i]<<" ";
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