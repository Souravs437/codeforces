#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n ;
    cin>>n;
    std::vector<int> odd, even;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        if(x % 2 == 0)
            even.push_back(i+1);
        else
            odd.push_back(i+1);
    }
    if(even.size() > odd.size())
        cout<<odd[0];
    else
        cout<<even[0];
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