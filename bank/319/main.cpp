/*
	powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/278/
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 100 + 10;
long long f_[N], g_[N];
long long f(int n);
long long g(int n);
long long f(int n)
{
	if (f_[n] + 1) return f_[n];
	return f_[n] = f(n - 2) + 2 * g(n - 1);
}
long long g(int n)
{
	if (g_[n] + 1) return g_[n];
	return g_[n] = f(n - 1) + g(n - 2);
}
int main()
{
	memset(f_, -1, sizeof f_);
	memset(g_, -1, sizeof g_);
	f_[1] = 0, f_[2] = 3, f_[3] = 0;
	g_[1] = 1, g_[2] = 0;
	int n;
	cin >> n;
	cout << 2 * f(n);
}