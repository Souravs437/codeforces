#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    string s ;
    std::vector<char> s2;
    cin>>s;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'y' || s[i] == 'Y' || s[i] == 'o' || s[i] == 'O' || s[i] == 'e'|| s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'u' || s[i] == 'U')
            continue;
        else{
            s2.push_back(s[i]);
        }

    }
    transform(s2.begin() , s2.end() , s2.begin(), :: tolower);
    for (auto i = s2.begin(); i != s2.end(); ++i)
    {
        cout<<"."<<*i;
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