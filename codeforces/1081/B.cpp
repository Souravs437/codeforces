#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    vector <ll> v[N];
    ll n , a[N] , b[N] , count = 0 ,k;
    bool flag = true;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cin>>a[i];
        a[i] = n - a[i];
        v[a[i]].push_back(i);
    }
    for (int i = 1; i <= n ; ++i)
    {
        if(v[i].size() % i)
        {
            cout<<"Impossible";
            flag = false;
            break;
        }
    
        else
        {
            if(v[i].size())
            {
                for (int j = 0; j < v[i].size() ; j += i)
                {
                    for (count++, k = 0; k < i ; ++k)
                    {
                       b[v[i][j+k]] = count;
                    }
                }
            }
            
        }
    }
    
    if(flag)
    {
        cout<<"Possible\n";
        for (int i = 1; i <= n; ++i)
        {
            cout<<b[i]<<" ";
        }
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