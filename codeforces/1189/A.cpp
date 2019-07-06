#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    string s , sk;
    ll n; 
    double sum(0);
    cin>>n;
    cin>>s;
    for (int i = 0; i < n; ++i)
    {
        if(s[i] == '1'){
            sum++;
        }
    }
    double check = (double)n/2;
    if(sum == check){
    cout<<2<<"\n";
    cout<<s[0] << " ";
    for (int i = 1; i < n; ++i)
    {
        cout<<s[i];
    }
    }
    else{
        cout<<1<<"\n";
        cout<<s;
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