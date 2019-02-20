#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    std::map<string, string> m;
    string str, str1;
    ll n, mn;
    cin>>n>>mn;
    for (int i = 0; i < mn; ++i)
    {
        cin>>str>>str1;
        m[str] = str1;
    }
    for (int i = 0; i < n; ++i)
    {
        cin>>str;
        if(str.length() > m[str].length())
            cout<<m[str]<<" ";
        else
            cout<<str<<" ";
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