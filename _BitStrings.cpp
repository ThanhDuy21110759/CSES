//Bit Strings
#include <bits/stdc++.h>
#include <math.h>
#define MOD 1000000007
using namespace std;
typedef long long int lli;
int main(){
	lli n; cin >> n;
	lli res = 1;
	for (int i = 0; i < n; i++){
		res *= 2;	//chia nho ra
		res %= MOD;
	}
	cout << res;
	return 0;
}

