#include <bits/stdc++.h>
#include <map>
using namespace std;
typedef long long ll;
int main(){
	ll n; cin >> n;
	ll tong = 0;
	for (int i = 1; i <= n - 1; i++){
		ll x; cin >> x;
		tong += x;
	}
	ll res = ((n+1)*((n-1)+1))/2;
	cout << res - tong;
	return 0;
}

