//_Coin Piles
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(ll a, ll b){
	if (a == 0 && b == 0) return 1;
	if ((a + b) % 3 == 0){
		if (a == 0 || b == 0) return 0; else {
			
		}		
	} else return 0;
}
int main(){
	int t; cin >> t;
	while (t--){
		ll a, b; cin >> a >> b;	
		if (solve(a, b)) cout <<"YES \n"; else cout << "NO \n";
	}
}
