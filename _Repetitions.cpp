#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; cin >> s;
	int count = 0, res = 0; char past = s[0];
	for (int i = 1; i < s.length(); i++){
		if (past == s[i]){
			count++;
			res = max(res, count);
		} else count = 0;
		past = s[i];
	}
	cout << res + 1;
	return 0;
}

