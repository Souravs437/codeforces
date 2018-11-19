#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n ,t , count =0;
    cin>>n>>t;
    string s;
    cin>>s;
    for (int i = 1 ; i <= t; ++i)
    {
        for(int j = s.size()-1 ; j > 0 ; --j )
        {
            if(s[j] == 'G'  &&  s[j - 1] == 'B')
                {
                    swap(s[j],s[j-1]); 
                    j--;
                }
        }
    } 
    for (int i = 0; i < s.size(); ++i)
    {
        cout<<s[i];
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