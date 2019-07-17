#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll AB = 0, BA = 0;
    string s;
    cin>>s;
    for (int i = 0; i < s.size() - 1;i++ ) {
        if(s[i] == 'A' && s[i+1] == 'B')
            { AB = 1 ; i += 2 ;}
        if(s[i] == 'B' && s[i+1] == 'A' && AB == 1)
            { cout<<"YES"<<"\n"; return;}
    }
    for (int i = 0; i < s.size() - 1;i++) 
    {
        if(s[i] == 'B' && s[i+1] == 'A') 
            { BA = 1 ; i += 2;}
        if(s[i] == 'A' && s[i+1] == 'B' && BA == 1)
            { cout<<"YES"<<"\n"; return;}
    }
    cout<<"NO"<<"\n";
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