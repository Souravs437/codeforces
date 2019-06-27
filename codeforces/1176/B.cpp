#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll n_corr[N];


void solve(){
    ll n, temp, one = 0, two = 0;
    vector< ll > corr;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin>>x;
        if(x % 3 == 0)
            corr.push_back(x);
        else{
            if(x % 3 == 1)
                one++;
            else
                two++;
        }
    }
    temp = min(one , two);
    //cout<<one<< "   "<<two<<endl; 
    ll ans = temp + (one - temp) / 3 + (two - temp) / 3;
    cout<<ans + corr.size()<<endl;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}