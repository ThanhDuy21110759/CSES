//Permutations
#include <bits/stdc++.h>
#define inp(arr); for (int i = 0; i < n; i++) { cin >> arr[i]; }
#define oup(arr); for (int i = 0; i < arr.size(); i++) { cout << arr[i] <<" "; }
using namespace std;
typedef long long ll;
void solve(int n){
	if (n == 2 || n == 3){
		cout << "NO SOLUTION";
	} else {
		for (int i = n - 1; i >= 1; i -= 2) cout << i <<" ";
		for (int i = n; i >= 1; i -= 2) cout << i <<" ";
	}
}
int main(){
	int n; cin >> n;
	solve(n);
	return 0;
}

