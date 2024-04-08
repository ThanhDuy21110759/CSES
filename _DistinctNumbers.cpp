//Distinct Numbers
#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	set<ll> arr;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		arr.insert(x);
	}
	cout << arr.size();
}
