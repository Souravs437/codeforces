#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    string s, t, p;
    map<char , ll> mp;
    set<char> st;
    cin>>s>>t>>p;
    ll len = 0;
    for (int i = 0; i < t.size(); ++i)
    {
        if(s[len] == t[i]) {
            len++;
        }
    }

    if(len != s.size()) {
        cout<<"NO"<<"\n";
        return;
    }
    for (int i = 0; i < t.length(); ++i)
    {
        mp[t[i]]++;
        st.insert(s[i]);
    }
    ll size = st.size();
    for (int i = 0; i < s.length(); ++i)
    {
        st.insert(s[i]);
    }
    if(size != st.size()) {
        cout<<"NO"<<"\n";
        return;
    }
    else {
        for (int i = 0; i < s.size(); ++i)
        {
            if(mp[s[i]]) {
                mp[s[i]]--;
            }
            else {
                cout<<"NO"<<"\n";
                return;
            }
        }

        for (int i = 0; i < p.size(); ++i)
        {
            if(mp[p[i]]) {
                mp[p[i]]--;
            }
            else
                continue;
        }
        for(auto i : mp) {
            if(i.second != 0) {
                cout<<"NO"<<"\n";
                return;
            }
        }
        cout<<"yes"<<"\n";
        
    }

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