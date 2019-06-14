#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
//ll a[N];


void solve(){
    ll len , sum(0) , sum2 = 0;
    vector <ll> v;
    ll x;
    cin>>len;
    for (int i = 0; i < 2 * len ; ++i)
    {
        cin>>x;
        v.push_back(x);
        sum += x;
    }
    sort(v.begin() , v.end());
    for (int i = 0; i < len; ++i)
    {
        sum2 += v[i];
    }
    if((float)sum/2 != sum2){
        for (int i = 0; i < 2 * len ; ++i)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    else
        cout<<-1;
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