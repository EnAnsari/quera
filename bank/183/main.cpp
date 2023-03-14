/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/7611/
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 1e5 + 10;

int n, k, a[MAXN];
ll d[MAXN];

int get(int a, int b){
	if (a <= b) return b - a;
	return k - (a - b);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++)	cin >> a[i];
	d[n - 1] = 0;
	for (int i = n-2; ~i; i--)
		d[i] = get(a[i], a[i + 1]) + d[i + 1];

	for (int i = 0; i < n; i++)
		cout << d[i]+a[i] << "\n";

	return 0;
}