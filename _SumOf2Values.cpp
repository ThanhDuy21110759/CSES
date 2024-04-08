//Sum of 2 Values
#include <bits/stdc++.h>
#include <map>
typedef long long ll;
using namespace std;
int main(){
	ll n, s; cin >> n >> s;
	map<ll, ll> mp;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		if (mp.count(s - x)){
			cout << i + 1 << " " << mp[s - x];
			return 0;
		}
		mp[x] = i + 1;
	}	
	cout <<"IMPOSSIBLE";
}
