#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll count = 0;
    string s;
    cin>>s;
    for( auto i = s.begin() ; i != s.end() ; ++i)
    {
        if(*i=='4'||*i=='7')
            count++;
    }
    if(count==7||count==4)
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