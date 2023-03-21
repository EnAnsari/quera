/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/170857/
*/

#include <bits/stdc++.h>

using namespace std;

const int maxn = 2000;
string pass[maxn];
bool in[maxn], knows[maxn][maxn];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> pass[i];
		sort(pass[i].begin(), pass[i].end());
	}

	int m;
	cin >> m;

	while (m--)
	{
		int x;
		cin >> x;
		x--;

		in[x] = !in[x];

		if (in[x] == 0)
			for (int i = 0; i < n; i++)
				if (in[i] && pass[i] == pass[x])
					knows[i][x] = true;
	}

	for (int i = 0; i < n; i++)
	{
		int s = 0;
		for (int j = 0; j < n; j++)
			s += knows[i][j];

		cout << s << " \n"[i == n - 1];
	}

	return 0;
}