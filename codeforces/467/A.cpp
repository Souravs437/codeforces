#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];
int count =0;

int  solve(){

	int x,y,count=0;
	cin>>x>>y;
	if(y-x>=2)
		count++;
	return count;
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	ll t = 1,count =0;
	cin >> t;
	while(t--){
		count+=solve();
	}
	cout<<count ;
	return 0;
}