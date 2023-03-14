/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/654/
*/

#include <bits/stdc++.h>
using namespace std;

void pythagoreanTriplet(int n) {
	for (int i = 1; i <= n / 3; i++) {
		for (int j = i + 1; j <= n / 2; j++) {
			int k = n - i - j;
			if (i * i + j * j == k * k) {
				cout << i << " " << j << " " << k;
				return;
			}
		}
	}
	cout << "Impossible";
}

int main() {
	int n;
	cin >> n;
	pythagoreanTriplet(n);
	
	return 0;
}