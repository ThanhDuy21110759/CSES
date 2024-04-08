#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
int main(){
	string s; cin >> s;
	vector<ll> arr(s.length());
	for (int i = 0; i < s.length(); i++) arr[i] = s[i] - 48;
	//Initial number
	cout << "Initial number = " << s << endl;
	//Smallest number
	cout << "Smallest number = ";
	sort(arr.begin(), arr.end());
	int i = 0;
	while (arr[i] == 0) i++;
	swap(arr[i], arr[0]);
	for (auto x : arr) cout << x; cout << endl;
	//Largest number
	cout << "Largest number = ";
	sort(arr.begin(), arr.end(), greater<ll>());
	for (auto x : arr) cout << x;
	return 0;
}
