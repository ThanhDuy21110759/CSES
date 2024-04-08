#include <bits/stdc++.h>
#include <math.h>
#include <vector>
using namespace std;
typedef long long ll;
//Kadena 's Algorithm
int kadane(vector<ll> temp, int n){
	ll sum = 0, res = INT_MIN; 
	bool kt = false;
	for (int i = 0; i < n; i++){
		sum = sum + temp[i];
		if (sum < 0) sum = 0; else
		if (sum > res){
			res = sum;
			kt = true;
		}
	}
	if (kt == true) return res;
	//Arr with all negative value
	res = temp[0];
	for (int i = 1; i < n; i++) if (temp[i] > res) res = temp[i];
	return res;
}
int main(){
	ll n; cin >> n;
	vector<ll> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	ll best = INT_MIN, past = 0;
	for (int i = 0; i < n; i++){
		if (past + arr[i] >= arr[i]) past += arr[i]; else past = arr[i];
		best = max(best,past);
	}
	cout << best;
}
