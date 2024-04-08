//Number Spiral
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
void oup(vector<vector<ll>> arr){
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			cout.width(6);
			cout << arr[i][j];
		}
		cout << endl;
	}
}
void initialization(vector<vector<ll>> & arr){
	int val = 0;
	for (int i = 0; i < 100000; i++){
		if (i % 2){
			for (int j = 0; j <= i; j++){
				val++;
				arr[j][i] = val;
			}
			for (int j = i - 1; j >= 0; j--){
				val++;
				arr[i][j] = val;
			}
		} else {
			for (int j = 0; j <= i; j++){
				val++;
				arr[i][j] = val;
			}
			for (int j = i - 1; j >= 0; j--){
				val++;
				arr[j][i] = val;
			}
		}
	}
}
int main(){
	vector<vector<ll>> arr(100000, vector<ll>(100000, 0));
	initialization(arr);
	int t; cin >> t;
	while (t--){
		int row, col; cin >> row >> col;
		cout << arr[row-1][col-1] << endl;
	}
	return 0;
}

