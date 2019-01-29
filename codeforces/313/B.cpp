#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N] = {0};


void solve(){
    string s;
    ll tst,lb,ub,count(0);
    cin>>s;
    cin>>tst;
    for (int i = 1; i < s.size(); ++i)
    {
        if(s[i] == s[i -1])
        {
            count++;
            a[i] = count;
        }
        else
        {
            a[i] = count;
        }
    }
    
    for (int i = 0; i < tst; ++i)
    {
        cin>>lb>>ub;
        cout<<a[ub-1] - a[lb-1];
        cout<<endl;

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