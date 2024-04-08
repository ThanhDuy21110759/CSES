//Palindrome Reorder
#include <bits/stdc++.h>
#include <string.h>
#include <string>
#include <map>
using namespace std;
typedef long long ll;
int main(){
	string s; cin >> s;
	unordered_map<char, ll> arr;
	int check = 0;
	for (int i = 0; i < s.length(); i++) arr[s[i]]++;
	for (auto count : arr) if (count.second % 2) check++;
	if (check <= 1){
		string a, b;
		for (auto x : arr){
			int count = x.second;
			if (count % 2 == 0){
				//thay vi dung for cho string => str(sl, ktu);
				string str(x.second / 2, x.first); a = str + a;
			} else {
				string str(x.second, x.first); b = b + str;
			}
		}
		string c = a; reverse(c.begin(), c.end());
		cout << a + b + c;
	} else cout << "NO SOLUTION";
	return 0;
}

