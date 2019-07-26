#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll cumm[N] = {0} , n , t, count = 0 , ans = 0;
    cin>>n>>t;
    for (int i = 1; i <= n; ++i)
    {
        cin>>cumm[i];
        cumm[i] += cumm[i - 1];
    }

    for (int i = 1; i <= n; ++i)
    {
        //cout<<cumm[i]<<" ";
    }

    ll ptr1 = 0 ; ll ptr2 = 1;
    for (int i = 1; ptr2 <= n; ++i)
    {
        if(cumm[ptr2] - cumm[ptr1] <= t) {
            count = ptr2 - ptr1;
            ptr2++;
            //cout<<count<<"debg";
        }
        else {
            ptr1++;
            count = 0;
           // cout<<ptr1<<"ww";

        }
        ans = max(ans , count);
    }

    cout<<ans<<"\n";
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