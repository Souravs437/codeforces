#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
const ll inf = 1e18;
const int N = 2 * 1e5 + 10;
 
ll res;
ll a[N];
set<pair<ll, ll>>s;
 
 
bool check(){
	auto itr = s.rbegin();
	ll a = itr -> first;
	itr++;
	if(a < 4) return false;
	a -= 4;
	ll b = itr -> first;
	if(a >= 4) return true;
	if(b < 2) return false;
	if(a >= 2 && b >= 2){
		return true;
	}
	if(b >= 4) return true;
	itr++;
	ll c = itr->first;
	if(c < 2) return false;
	if(b >= 2 && c >= 2) return true;
	return false;
}
 
 
 
void solve(){
	ll n;
	cin >> n;
	std::map<ll, ll> mp;
	s.insert({0, 0});
	s.insert({0, -1});
	for(int i = 0; i < n; ++i){
		cin >> a[i];
		if(mp.count(a[i])){
			s.erase({mp[a[i]], a[i]});
		}
		mp[a[i]]++;
		s.insert({mp[a[i]], a[i]});
	}
	ll q;
	cin >> q;
	while(q--){
		char x;
		cin >> x >> res;
		if(x == '+'){
			if(mp.count(res)){
				s.erase({mp[res], res});
			}
			mp[res]++;
			s.insert({mp[res], res});
		}else{
			s.erase({mp[res], res});
			mp[res]--;
			s.insert({mp[res], res});
		}
		check() && cout << "YES\n" || cout << "NO\n";
	}
}
 
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin >> t;
    while(t--){
    	solve();
    }
}
// smf