#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    std::vector<int> v;
    std::vector<int> vv;
    ll x , y , n , count = 0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>x>>y;
        v.push_back(x);
        vv.push_back(y);
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(v[i] == vv[j])
                count++;
        }
    }
    cout<<count;
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