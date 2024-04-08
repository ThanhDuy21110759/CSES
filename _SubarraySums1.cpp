#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n, x; cin >> n >> x;
	vector<ll> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	//solve
	ll cursum = 0, cnt = 0;
	unordered_map<ll, ll> mp;
	for (int i = 0; i < arr.size(); i++){
		cursum += arr[i];
		if (cursum == x) cnt++; 
		if (mp.find(cursum - x) != mp.end()) cnt += mp[cursum - x];
		mp[cursum]++;
	}
	cout << cnt;
	return 0;
}

