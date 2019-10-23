#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
int n, k, a;
cin >> n >> k;
map<int, int> m;
for(int i=0; i < n; ++i) {
	cin >> a;
	m.insert(a, ;
}
int result = 0;
for(int i=0; i < n; ++i) {
	if(i >= k) {
		result+=min(v[i-k], v[i]);
	}
	if(n-1-k >= i) {
		result+=min(v[i+k], v[i]);
	}
}
cout << result << endl;
return 0;
}
