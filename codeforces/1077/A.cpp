#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll a, b, k , dis ;
    cin>>a>>b>>k;
        if(k %2 != 0)
        {
            dis = (k-1)/2*a-(k-1)/2*b;
            dis =dis + a;
        }
        else
            dis = k/2*a-k/2*b;
        cout<<dis<<endl;
        
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}