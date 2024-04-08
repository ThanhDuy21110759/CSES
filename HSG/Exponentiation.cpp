// bitset<64>(b).to_string().substr(64 - (int)(log2(b)) - 1); --> Convert DEC to BIN
#include <bits/stdc++.h>
#include <bitset>
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll solve(ll a,ll b){
	a %= MOD;
	ll res = 1;
	while (b > 0){
		if (b & 1){
			res *= a % MOD;			
		}
		a *= a % MOD;
		b >>= 1;
	}
	return res;
}
int main(){
	ll a, b; cin >> a >> b;
    cout << solve(a, b);
	return 0;
}
