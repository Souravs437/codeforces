#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , t ,max = -1, min = 10001;
    pair<ll , ll > ma;
    pair<ll , ll > mn;
    cin>>n;
     for (int i = 0; i < n; ++i )
     {
         cin>>a[i];
     }
     for (int i = n-1; i >= 0 ; --i )
     {
        if(a[i] < min){
            min = a[i];
            mn.first = min;
            mn.second = i;
        }

     }

     for (int i = 0; i < n; ++i)
     {
         if(a[i] > max)
         {
            max = a[i];
            ma.first = max;
            ma.second = i;
         }
     }
     if ( mn.second > ma.second)
     {
        cout<<n-1 - mn.second + ma.second;
     }
     else
        cout<<n-1 - mn.second + ma.second - 1;

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