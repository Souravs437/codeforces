#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;

ll n, a , b, c;
const long long MIN = -9999999; 

vector<long long> v(40001, -1);

ll cut_rod(ll n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n < 0 || (n < a && n < b && n < c ))
    {
        return MIN;
    }
    if(v[n] != -1)
    {
        return v[n];
    }
    else
    {
        return v[n] = 1 + (max( cut_rod(n-a), max( cut_rod(n-b) , cut_rod(n - c))));
    }
}

void solve(){
    
    cin>>n>>a>>b>>c;
    ll ans = cut_rod(n);
    cout<<ans;
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