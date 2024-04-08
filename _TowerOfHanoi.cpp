//Tower of Hanoi
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;
void solve(int n, int x, int y, int z){
	if (n == 0) return;
	solve(n - 1, x, z, y);
	cout << x <<" "<< z <<"\n";
	solve(n - 1, y, x, z);
}
int main(){
	int n; cin >> n;
	cout << pow(2, n) - 1 <<"\n";	//General Formula = 2^n - 1
	solve(n, 1, 2, 3);
	return 0;
}

