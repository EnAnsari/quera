/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/8939/
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

#define F first
#define S second
#define all(v) v.begin(), v.end()
#define sz(v) ((int)(v.size()))

const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const int N = 1e5 + 7;

int main()
{
	ios::sync_with_stdio(false);

	string a[3], tmp;
	cin >> a[0] >> tmp >> a[1] >> tmp >> a[2];
	int x;
	for (int i=0; i<3; i++)
		for (int j=0; j<sz(a[i]); j++)
			if (a[i][j] == '#')
				x = i;
	int num[3];
	for (int i=0; i<3; i++)
		if (i != x)
			num[i] = atoi(a[i].c_str());
	if (x == 0)
		num[0] = num[2] - num[1];
	if (x == 1)
		num[1] = num[2] - num[0];
	if (x == 2)
		num[2] = num[0] + num[1];
	for (int i=0; i<3; i++)
		if (num[i] < 0 || num[i] > 1000 * 1000 * 1000)
		{
			cout << "-1\n";
			return 0;
		}
	stringstream ss;
	ss << num[x]; 
	string s;
	ss >> s;
	for (int i=0; i<sz(a[x]) && a[x][i] != '#'; i++)
		if (s[i] != a[x][i])
		{
			cout << "-1\n";
			return 0;
		}
	for (int i=0; i<sz(a[x]) && a[x][sz(a[x]) - 1 - i] != '#'; i++)
		if (s[sz(s) - 1 -i] != a[x][sz(a[x]) - 1 - i])
		{
			cout << "-1\n";
			return 0;
		}
	cout << num[0] << " + " << num[1] << " = " << num[2] << "\n";
	return 0;
}