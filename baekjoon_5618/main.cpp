#include <iostream>
using namespace std;

int n[3], t, c, m = 100000000;
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n[i];
		m = m > n[i] ? n[i] : m;
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j < t; j++) if (n[j] % i == 0) c++;
		if (c == t) cout << i << endl;
		c = 0;
	}
	return 0;
}