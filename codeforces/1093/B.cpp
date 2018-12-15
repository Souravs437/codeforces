#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

bool palin(string s)
{
    bool flag = true;
    for (int i = 0; i < s.size(); ++i)
    {
        if(s[i] != s[s.size() - i -1]){
            flag = false;
            break;
        }
    }
    return flag;
}


void solve(){
    ll n;
    string s;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>s; 
        bool flag = palin(s);
        if(flag){
            if(s.size() < 3)
            {
                cout<<"-1"<<"\n";
            }
            else
            {
                sort(s.begin() , s.end());
                flag = palin(s);
                if(flag)
                {
                    cout<<"-1"<<"\n";
                }
                else
                    cout<<s<<"\n";
            }
        }
        else
            cout<<s<<"\n";  
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