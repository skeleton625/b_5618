#include <cstdio>

int n[3], t, c;
int gcd(int a, int b) {
	int m, n, tmp;
	m = a > b ? a : b;
	n = a < b ? a : b;
	while (m%n != 0) {
		tmp = n;
		n = m % n;
		m = tmp;
	}
	return n;
}

int main() {
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++) scanf_s("%d",&n[i]);
	if (t == 2) c = gcd(n[0], n[1]);
	else c = gcd(gcd(n[0], n[1]), n[2]);
	for (int i = 1; i <= c; i++) {
		if (c%i==0) printf("%d\n", i);
	}
	return 0;
}