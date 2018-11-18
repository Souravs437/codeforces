#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    string s, s1, f;
    cin>>s>>s1>>f;
    s = s + s1;
    sort(s.begin() , s.end());
    sort(f.begin() , f.end());
    if(s == f)
        cout<<"YES";
    else
        cout<<"NO";
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