#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool solver(map<char, int> m) {
	bool oneOdd = false;
	for(auto it = m.begin(); it != m.end(); ++it) {
		if(!oneOdd && it->second % 2 != 0) {
			oneOdd = true;
		}else if(oneOdd && it-> second % 2 != 0) {
			return false;
		}
	}
return true;
}

int main() {
string s;
getline(cin, s);
map<char, int> m;
for(int i=0; i < s.size(); ++i) {
	m[s[i]]++;
}
cout << solver(m) << endl;
return 0;
}
