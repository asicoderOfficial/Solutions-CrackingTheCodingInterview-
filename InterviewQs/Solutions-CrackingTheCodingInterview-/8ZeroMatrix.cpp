#include <iostream>
#include <vector>

using namespace std;

void nullifyRow(vector<vector<int> > &v, int i, int n) {
        for(int h=0; h < n; ++h) {
                v[i][h] = 0;
        }
}

void nullifyColumn(vector<vector<int> > &v, int j, int m) {
        for(int h=0; h < m; ++h) {
                v[h][j] = 0;
        }
}

void setZeroes(vector<vector<int> > &v, int m, int n) {
vector<bool> rows(m);
vector<bool> columns(n);

int a;
for(int i=0; i < m; ++i) {
	for(int j=0; j < n; ++j) {
		cin >> a;
		v[i][j] = a;
		if(v[i][j] == 0) {
			rows[i] = true;
			columns[j] = true;
		}
	}
}

for(int i = 0; i < m; ++i) {
	if(rows[i] == true) {
		nullifyRow(v, i, n);
	}
}
for(int j = 0; j < n; ++j) {
	if(columns[j] == true) {
		nullifyColumn(v, j, m);
	}
}

}

int main() {
int m, n;
cin >> m >> n;
vector<vector<int> > v(m, vector<int>(n, 0));
setZeroes(v, m, n);
for(int i = 0; i < m; ++i) {
	for(int j = 0; j < n; ++j) {
		cout << v[i][j] << " ";
	}
	cout << endl;
}
return 0;
}
