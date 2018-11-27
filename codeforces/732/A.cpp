#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll k, r, i = 0, ans = 0;
    set <int> s ;
    auto itr = s.begin();
    cin>>k>>r;
    for (int i = 1; i <= 9; ++i)
    {
        if(k*i % 10 == 0)
        {
            ans = i;
            break;
        }
        else if( k*i % 10 == r){
            s.insert(i);

        }
    }
    itr = s.begin();

    if(ans > 0)
        if(*itr > 0 && ans > *itr)
            cout<<*itr;
        else
            cout<<ans;
    else 
        cout<<*itr;
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