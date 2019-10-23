#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
string s, res = "";
getline(cin, s);
int c = 1;
if(s.size() == 1)
	cout << s[0] << 1 << endl;
else {
for(int i=0; i < s.size()-1; ++i) {
	if(s[i] != s[i+1]) {
		res += s[i];
		res.append(to_string(c));
		c = 1;
	}else if(i == s.size() - 2) {
		res+=s[i];
		res.append(to_string(c+1));
	}else{
		++c;
	}
}
}
cout << res << endl;
return 0;
}
