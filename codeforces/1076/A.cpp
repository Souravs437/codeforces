#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n ,flag=0,len;
    cin>>n;
    string s;
    cin>>s;
    len = s.size();
    for (int i = 0; i < len; ++i)
    {
        if(s[i]>s[i+1])
        {
            flag=i;
            break;
        }
    }
    s.erase(s.begin()+flag);
    cout<<s;
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