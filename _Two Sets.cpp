//TwoSets
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
	ll n; cin >> n;
	vector<ll> a, b;
	ll s = (n + 1) * ((n - 1) + 1) / 2;
	if (s % 2) {
		cout <<"NO";
	} else {
		cout <<"YES"<<"\n";
		ll tmp = s / 2;
		for (ll i = n; i >= 1; i--){
			if (tmp - i > 0){
				a.push_back(i);
				tmp -= i;
			} else b.push_back(i);
		}
		a.push_back(b.back());
		b.pop_back();
		//Oup
		cout << a.size()<<"\n"; 
		for (auto x : a) cout << x <<" ";
		cout <<"\n"<< b.size() <<"\n";
		for (auto x : b) cout << x <<" ";
	}
	return 0;
}

