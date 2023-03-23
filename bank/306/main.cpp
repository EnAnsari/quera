/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/17246/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 5;
int MOD = 1e9 + 7;

int dp[N];

int main()
{
	int n;
	cin >> n;
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 3;
	for (int i = 3;i <= n;i++)
		dp[i] = (dp[i - 1] + dp[i - 3]) % MOD;

	int g[] = { 1,2,4 };
	if (n < 3)
		cout << g[n];
	else
		cout << dp[n] << "\n";;
}