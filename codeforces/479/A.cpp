#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll a , b ,c , ans[6];
    cin>>a>>b>>c;
    ans[0] = a + b +c;
    ans[1] = (a+b)*c;
    ans[2] = a*(b+c);
    ans[3] = a*b*c;
    ans[4] = a*b+c;
    ans[5] = a+b*c;
    sort(ans, ans+6);
    cout<<ans[5];
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