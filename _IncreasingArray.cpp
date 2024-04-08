//Increasing Array
#include <bits/stdc++.h>
#define inp(arr); for (int i = 0; i < n; i++) { cin >> arr[i]; }
#define oup(arr); for (int i = 0; i < arr.size(); i++) { cout << arr[i] <<" "; }
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n; 
	vector<ll> arr(n);
	inp(arr);
	ll res = 0;
	for (int i = 1; i < n; i++){
		if (arr[i] < arr[i-1]){
			res += abs(arr[i-1] - arr[i]);  
			arr[i] = arr[i-1];
		}
	}
	cout << res;
}
