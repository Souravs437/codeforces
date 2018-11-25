#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];



void solve(){
    ll a ;
    string s[5] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
    cin>>a;
    while(a > 5)
        a = a/2 -2;
    cout<<s[a-1];
    
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