/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2440/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define double long double
const int N = 2e4 + 10;
struct S {
	ll t, w, c;
}
st[N];
int n;
bool cmp(S a, S b) {
	double d1 = (a.w * 1.0) / a.t;
	double d2 = (b.w * 1.0) / b.t;
	return d1 > d2;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> st[i].t >> st[i].w;
	}
	sort(st, st + n, cmp);
	st[0].c = st[0].t;
	ll ans = st[0].c*st[0].w;
	for (int i = 1; i < n; i++)
	{
		st[i].c = st[i - 1].c + st[i].t;
		ans += st[i].c*st[i].w;
	}
	cout << ans;
}