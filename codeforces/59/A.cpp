#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll u =0 ,l = 0;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); ++i)
    {
        if(isupper(s[i]))
            u++;
        else
            l++;
    }   

    if(u>l)
        transform(s.begin(), s.end() , s.begin(), :: toupper);
    else
        transform(s.begin(), s.end() , s.begin(), :: tolower);
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