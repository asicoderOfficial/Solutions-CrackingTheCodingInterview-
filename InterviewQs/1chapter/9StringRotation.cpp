#include <iostream>
#include <string>

using namespace std;
bool isSubstring(string s1, string s2) {
	for(int i=0; i < s1.size(); ++i) {
		if(s1[i] == s2[0] && s1.substr(i, s2.size() + i - 1) == s2) {
			return true;
		}
	}
return false;
}
int main() {
string s1, s2; 
cin >> s1 >> s2;
if(s1.size() == s2.size()) {
	string s3 = s1 + s1;
	cout << isSubstring(s3, s2);
}
return 0;
}
