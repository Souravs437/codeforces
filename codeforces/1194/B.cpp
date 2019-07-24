#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];
ll r[N], c[N];
void solve(){
    ll m , n, minx = N , miny = N;
    cin>>n>>m;
    string s[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>s[i];
    }
    
 /*   for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout<<s[j][i];
            
        }
        cout<<"\n";
    }
*/        

    ll count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(s[i][j] == '.')
                count++;
        }
        r[i] = count;
        count= 0;
    }
    count = 0;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(s[j][i] == '.')
                count++;
        }
        
        c[i] = count;
        count = 0;
    }
    ll ans = 1e10;
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < m ; j++) {
            if(s[i][j] == '*') {
                ans = min(ans , r[i] + c[j]);
               // cout<<i+1<<r[i]<<"  "<<j + 1<<c[j]<<"dfsf"<<ans<<endl;
            }
            else{
                ans = min(ans , r[i] + c[j] - 1);
            }
        }
    }
    
    cout<<ans<<"\n"; 
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