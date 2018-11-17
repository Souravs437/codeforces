#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    vector<pair<ll ,ll> > v;
    vector<ll> ind;
    ll sum = 0, n , x;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cin>>x;
        v.push_back({x , i});
        sum += x;
    }
    sort(v.begin() , v. end());
    for (int i = 0; i < v.size()-1; ++i)
    {
        if(sum - v[v.size()-1].first - v[i].first == v[v.size() -1].first)
            ind.push_back(v[i].second);
    }
    if(sum - v[v.size() -1].first - v[v.size() -2].first == v[v.size() - 2 ].first)
        ind.push_back(v[v.size() -1].second);
    cout<<ind.size()<<endl;
    for (auto i : ind )
    {
        cout<<i<<" ";
    }
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