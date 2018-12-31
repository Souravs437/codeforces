#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

bool ans_(vector<string>& str, string st)
{
    set<string> p ,s;
    for (int i = 1; i < st.length(); ++i)
    {
        p.insert(st.substr(0, i));
        s.insert(st.substr(i, st.length() - i));;
    }
    string ans = "";
    for(string& i : str)
    {
        if(p.count(i)){
            p.erase(i);
            ans += "P";
        }
        else if(s.count(i)){
            s.erase(i);
            ans += "S";
        }
        else{
            return false;   
        }
    }
    cout<<ans<<endl;
    return true;
}

void solve(){
    ll n;
    cin>>n;
    string x ,y;
    vector <string> str(2*n - 2);
    for(string& i : str)
    {
        cin>>i;
        if(i.size() == n-1)
        {
            y = x;
            x = i;
        }
    }
    
    if(!ans_(str, x + y.back()))
    {
        ans_(str, y + x.back());
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