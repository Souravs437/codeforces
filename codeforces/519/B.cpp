#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll a[4], x, sum = 0;
    ll n;
    cin>>n;
    for (int i = 0; i < 3; ++i)
       {
          for (int j = 0; j < n - i ; ++j)
           {
              cin>>x;
              sum += x;
           }
          a[i] = sum;
          sum = 0;
        }  
    cout<<a[0] - a[1]<<"\n";
    cout<<a[1] - a[2]<<"\n";
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