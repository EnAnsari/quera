/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2532/
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii; 

#define mp make_pair
#define F first
#define S second

const ll N = 1010;
const ll M = 20;
const ll SQ = 320;
const ll INF = 1e16;
const ll MOD = 1e9+7;

int n,m;
int a[N][N];
int dp[N][N][2];
int par[N][N][2];


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m;
	for (int i = 0; i<m; i++)
	{
		int x,y;
		cin >> x >> y;
		x--;
		y--;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	for (int i = 0; i<n; i++)
		dp[i][(i-1+n)%n][0] = dp[i][(i-1+n)%n][1] = 1;
	for (int l = n-2; l>=0; l--)
		for (int i = 0; i<n; i++)
			for (int k = 0; k<2; k++)
			{
				int b = (i+l)%n;
				int t;
				if (k==0)
					t = i;
				else
					t = b;
				if (a[t][(i-1+n)%n] && dp[(i-1+n)%n][b][0])
				{
					dp[i][b][k] = 1;
					par[i][b][k] = 1;
				}
				if (a[t][(b+1)%n] && dp[i][(b+1)%n][1])
				{
					dp[i][b][k] = 1;
					par[i][b][k] = 2;
				}
			}
	int id = -2;
	for (int i = 0; i<n; i++)
		if (dp[i][i][0])
			id = i;
	cout << id+1 << endl;
	if (id==-2)
		return 0;
	int l = id , r = id , p = 0;
	for (int i = 0; i<n-1; i++)
	{
		int k;
		if (par[l][r][p]==1)
		{
			l = (l-1+n)%n;
			k = l;
			p = 0;
		}
		else
		{
			r = (r+1)%n;
			k = r;
			p = 1;
		}
		cout << k+1 << endl;
	}

	return 0;
}
