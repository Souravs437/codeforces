#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll ans =0 ;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); ++i)
    {
        if(s[i] ==  'A'){
            ans += count(s.begin( ), s.begin() + i, 'Q')*count(s.begin() + i +1, s.end() , 'Q');
        }
    }
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