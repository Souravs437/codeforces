#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll x ,n , ptr = 1;
    cin>>n>>x;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n;)
    {      
        if(ptr == x)
        {
            cout<<"YES";
            break;
        }
        if( ptr > x)
        {
            cout<<"NO";
            break;
        }
        ptr +=a[i];
        i = ptr-1;     
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