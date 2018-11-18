#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    set<char> str;
    ll n;
    string strn;
    cin>>n;
    cin>>strn;
    if( n < 26)
        cout<<"NO";
    else
    {
        transform(strn.begin() , strn.end() , strn.begin() , ::tolower);
        ll len = strn.size();
        for(auto i =strn.begin() ; i != strn.end() ; i++)
        {
            str.insert(*i);
        }
        if(str.size() == 26)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
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