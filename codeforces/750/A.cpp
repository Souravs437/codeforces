#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;
const int VAL = 5; 

ll res;
ll a[N];


void solve(){
    ll n, k ,t = 240;
    cin>>n>>k;
    t -= k;

    ll count = 0;
    int i =1;
    while(t >= VAL*i )
    {
        count++;
        t -= VAL*i;
        i++;
    }
    if(count < n )    
        cout<<count;
    else
        cout<<n;

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