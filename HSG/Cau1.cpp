#include <bits/stdc++.h>
#include <string.h>
using namespace std;
bool nhuan(int nam){
	if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) return true; else return false;
}
bool _4digit(string s, string &date, string &month, string &year){
	// #1: a/b/cd
	date = s[0]; month = s[1]; year = s[2]; year += s[3];
	if (date != "0" && month != "0" && year != "00") return true;
	date = ""; month = ""; year = "";
	// #2: a/bc/d 
	date = s[0]; month = s[1]; month += s[2]; year = s[3];
	if (date != "0" && month != "00" && year != "0") return true;
	date = ""; month = ""; year = "";
	// #3: ab/c/d
	date = s[0]; date += s[1]; month = s[2]; year = s[3];
	if (date != "00" && month != "0" && year != "0") return true;
	date = ""; month = ""; year = "";
	return false;
}
bool _5digit(string s, string &date, string &month, string &year){
	int ngay = 0, thang = 0, nam = 0;
	// #1: a/b/cde
	date = s[0]; month = s[1]; year = s[2]; year += s[3]; year += s[4];
	ngay = int(date[0]) - 48; 
	thang = int(month[0]) - 48; 
	nam = (int(year[0]) - 48) * 100 + (int(year[1]) - 48) * 10 + (int(year[2]) - 48);
	if (ngay > 0 && ngay <= 31 && thang > 0 && thang <= 12 && nam > 0 && nam <= 100){
		if ((thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay <= 30) return true; 
		else if ((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) && ngay <= 31) return true;
		else if (thang == 2){
			if (nhuan(nam)){
				if (ngay <= 29) return true;
			} else if (ngay <= 28) return true;
		}
	}
	ngay = thang = nam = 0;
	date = month = year = "";
	// #2: a/bc/de
	date = s[0]; month = s[1]; month += s[2]; year = s[3]; year += s[4];
	ngay = int(date[0]) - 48; 
	thang = (int(month[0]) - 48) * 10 + (int(month[1]) - 48); 
	nam = (int(year[0]) - 48) * 10 + (int(year[1]) - 48);
	if (ngay > 0 && ngay <= 31 && thang > 0 && thang <= 12 && nam > 0 && nam <= 100){
		if ((thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay <= 30) return true; 
		else if ((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) && ngay <= 31) return true;
		else if (thang == 2){
			if (nhuan(nam)){
				if (ngay <= 29) return true;
			} else if (ngay <= 28) return true;
		}
	}
	ngay = thang = nam = 0;
	date = month = year = "";
	// #3: a/bcd/e
	date = s[0]; month = s[1]; month += s[2]; month += s[3]; year = s[4];
	ngay = int(date[0]) - 48; 
	thang = (int(month[0]) - 48) * 100 + (int(month[1]) - 48) * 10 + (int(month[2]) - 48); 
	nam = int(year[0]) - 48;
	if (ngay > 0 && ngay <= 31 && thang > 0 && thang <= 12 && nam > 0 && nam <= 100){
		if ((thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay <= 30) return true; 
		else if ((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) && ngay <= 31) return true;
		else if (thang == 2){
			if (nhuan(nam)){
				if (ngay <= 29) return true;
			} else if (ngay <= 28) return true;
		}
	}
	ngay = thang = nam = 0;
	date = month = year = "";
	// #4: ab/c/de
	date = s[0]; date += s[1]; month = s[2]; year = s[3]; year += s[4];
	ngay = (int(date[0]) - 48) * 10 + (int(date[1]) - 48); 
	thang = int(month[0]) - 48; 
	nam = (int(year[0]) - 48) * 10 + (int(year[1]) - 48);
	if (ngay > 0 && ngay <= 31 && thang > 0 && thang <= 12 && nam > 0 && nam <= 100){
		if ((thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay <= 30) return true; 
		else if ((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) && ngay <= 31) return true;
		else if (thang == 2){
			if (nhuan(nam)){
				if (ngay <= 29) return true;
			} else if (ngay <= 28) return true;
		}
	}
	ngay = thang = nam = 0;
	date = month = year = "";
	// #5: ab/cd/e
	date = s[0]; date += s[1]; month = s[2]; month += s[3]; year = s[4];
	ngay = (int(date[0]) - 48) * 10 + (int(date[1]) - 48); 
	thang = (int(month[0]) - 48) * 10 + (int(month[1]) - 48); 
	nam = int(year[0]) - 48;
	if (ngay > 0 && ngay <= 31 && thang > 0 && thang <= 12 && nam > 0 && nam <= 100){
		if ((thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay <= 30) return true; 
		else if ((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) && ngay <= 31) return true;
		else if (thang == 2){
			if (nhuan(nam)){
				if (ngay <= 29) return true;
			} else if (ngay <= 28) return true;
		}
	}
	ngay = thang = nam = 0;
	date = month = year = "";
	// #6: abc/d/e
	date = s[0]; date += s[1]; month = s[2]; month += s[3]; year = s[4];
	ngay = (int(date[0]) - 48) * 100 + (int(date[1]) - 48) * 10 + (int(date[2]) - 48); 
	thang = int(month[0]) - 48; 
	nam = int(year[0]) - 48;
	if (ngay > 0 && ngay <= 31 && thang > 0 && thang <= 12 && nam > 0 && nam <= 100){
		if ((thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay <= 30) return true; 
		else if ((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) && ngay <= 31) return true;
		else if (thang == 2){
			if (nhuan(nam)){
				if (ngay <= 29) return true;
			} else if (ngay <= 28) return true;
		}
	}
	return false;
}
int main(){
	string s; cin >> s;
	string date, month, year;
	if (s.length() == 4){
		if (_4digit(s, date, month, year)) cout << date <<"/"<< month <<"/" << year; else cout <<"NO SOLUTION";
	} else if (_5digit(s, date, month, year)) cout << date <<"/"<< month <<"/" << year; else cout <<"NO SOLUTION";
	return 0;
}
