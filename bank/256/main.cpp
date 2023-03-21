/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/15126/
*/

#include <bits/stdc++.h>

#define F first
#define S second
#define pii pair<int, int>
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;

const int K = 105, D = 2010, mod = 1e9 + 7;

int dp[K][K * D], ps[K][K * D];

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int k, d; cin >> k >> d;
	int n = k * d;
	
	dp[0][0] = 1;
	for(int j=0; j<=n; j++)
		ps[0][j] = 1;

	for(int i=1; i<=k; i++)
		for(int j=0; j<=n; j++)
		{
			int r = min(j + d, n), l = max(0, j - d);
			if(l == 0)dp[i][j] = ps[i - 1][r];
			else dp[i][j] = (ps[i - 1][r] + mod - ps[i - 1][l - 1]) % mod;
			
			if(j == 0)ps[i][j] = dp[i][j];
			else ps[i][j] = (ps[i][j - 1] + dp[i][j]) % mod;
		}
	cout << ps[k][n] << endl;
	return 0;
}