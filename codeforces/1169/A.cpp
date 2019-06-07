#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, a, x, b, y;
    cin>>n>>a>>x>>b>>y;
        while(1){
            if(a == b){
                cout<<"YES";
                break;
            }
            if(a == x)
                break;
            if(a == n)
                a = 1;
            else
                a++;
            if(b == y)
                break;
            if(b == 1)
                b = n;
            else
                b--;
        }
        if(a != b)
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