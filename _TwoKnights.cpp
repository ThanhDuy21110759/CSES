//TwoKnights [Mathematics]
#include <bits/stdc++.h>
#define inp(arr); for (int i = 0; i < n; i++) { cin >> arr[i]; }
#define oup(arr); for (int i = 0; i < arr.size(); i++) { cout << arr[i] <<" "; }
using namespace std;
typedef unsigned long long ull;
int main(){
	int n; cin >> n;
	for (ull i = 1; i <= n; i++){
		ull total = (i * i) * (i * i - 1) / 2;
		ull attack = 4 * (i - 1) * (i - 2);
		cout << total - attack <<"\n";
	}
	return 0;
}

