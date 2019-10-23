#include <iostream>
#include <algorithm>

using namespace std;

bool solver(string s) {
	for(int i=0; i < s.size()-1; ++i) {
		if(s[i] == s[i+1])	return false;
	}
return true;
}

int main() {
string s;
cin >> s;
if(s.size() == 1) cout << "YES" << endl;
else {
sort(s.begin(), s.end());
if(solver(s))	cout << "YES" << endl;
else		cout << "NO" << endl;
}
return 0;
}
