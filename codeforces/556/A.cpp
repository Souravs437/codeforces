#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){

    string s;
    ll one , zero, diff, n;
    cin>>n>>s;
    one = count(s.begin() , s.end() , '1');
    zero = n - one;
    diff = one - zero;
    if(diff < 0)
        diff = -diff;
    cout<<diff;

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