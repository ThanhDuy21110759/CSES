//_MovieFestival
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
	ll n; cin >> n;
	vector<pair<ll,ll>> v;
	for (int i = 0; i < n;  i++){
		ll a, b; cin >> a >> b;
		v.push_back(make_pair(b, a));
	}
	//solve
	ll tmp = 0, res = 0;	
	//sorting by endtime
	sort(v.begin(), v.end());
	for (auto x : v){
		if (x.second >= tmp){
			tmp = x.first;
			res++;
		}
	}
	cout << res;
	return 0;
}
