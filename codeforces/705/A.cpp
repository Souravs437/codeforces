#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    string s1 ,s2, s3, s4;
    s1 = "I hate";
    s2 = "I love";
    s3 = "that";
    s4 = "it";
    ll n;
    cin>>n;
    for (int i = 1; n > 0; ++i)
    {
        if( i % 2 == 0)
            cout<<s2<<" ";
        else
            cout<<s1<<" ";
        if(n == 1)
            cout<<s4;
        else
            cout<<s3<<" ";
        n--;
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