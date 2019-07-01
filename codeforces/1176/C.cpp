#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
//ll a[N];
ll arrj[6] = {4 , 8 , 15 , 16 , 23, 42};

void solve(){
    ll n, temp , arr[50] = {0} , count(0) , sum = 0;
    ll seq[6] = {0};
    vector<ll> a;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin>>x;
        a.push_back(x);
        ++arr[x];
    }

    for (int i = 0; i < n; ++i)
    {
        if(a[i] == arrj[0]) seq[0]++;
        else if(a[i] == arrj[1] && seq[1] < seq[0])  seq[1]++;
        else if(a[i] == arrj[2] && seq[2] < seq[1])  seq[2]++;
        else if(a[i] == arrj[3] && seq[3] < seq[2])  seq[3]++;
        else if(a[i] == arrj[4] && seq[4] < seq[3])  seq[4]++;
        else if(a[i] == arrj[5] && seq[5] < seq[4])  seq[5]++;
    }
    cout<<n - seq[5] * 6<<"\n";

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