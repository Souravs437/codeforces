#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, cum[N] , k;
    cin>>n>>k;
    for (int i = 0 , j = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < k; ++i)
    {
        cum[0] += a[i];
    }
    for (int i = 1; i < n - k + 1; ++i)
    {
        cum[i] = cum[i-1] + a[i+k-1] - a[i-1];
    }
    ll min = 0;
    for (int i = 0; i < n-k +1; ++i)
    {
        if(cum[min] > cum[i])
            min = i;
        //cout<<cum[i];
        //cout<<"  ";
    }
    cout<<min+1<<"\n";

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