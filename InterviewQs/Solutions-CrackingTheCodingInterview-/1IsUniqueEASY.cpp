#include <iostream>
#include <vector>

using namespace std;

bool solver (string s, vector<int> v) {
	for(int i=0; i < s.size(); ++i) {
		if(v[(int)s[i]] == 1) return false;
		v[(int)s[i]]++;
	}
	return true;
}
int main() {
string s;
cin >> s;
vector<int> v(256);
if(solver(s, v)) cout << "YES" << endl;
else		 cout << "NO" << endl;
return 0;
}
