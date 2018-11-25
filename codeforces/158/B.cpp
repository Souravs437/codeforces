#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , hash[5] = {0}, count = 0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        a[i] = a[i];
        hash[a[i]] += 1;
    }

    count += hash[4];
    
    while(hash[3] != 0)
    {
        count++;
        hash[3]--;
        if(hash[1] != 0)
            hash[1]--;
    }

   count += hash[2]/2; 

    while(hash[2] % 2 !=0)
    {
        count++;
        hash[2]--;
        if(hash[1] != 0)
            hash[1]--;
        if(hash[1] !=0)
            hash[1]--;
    }
    count += hash[1]/4;
    if(hash[1] % 4 != 0)
        count++;
    cout<<count;
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