#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    int n , k, x, sum = 0;
    cin>>n>>k;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        if(a[i] + k <= 5)
            sum++;
    }
    
    cout<<sum/3;

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