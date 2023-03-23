/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/9597/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll  long long
const int N = 2e5 + 5;
int a[N], b[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> a[i], a[i]--, b[a[i]] = i;
	vector<pair<int, int>>ans;
	for (int i = 0;i < n;i++)
		if (a[i] != i)
		{
			int j = b[i];
			if (j - i <= n / 2 + 1)
			{
				ans.push_back({ i , j });
				swap(a[i], a[j]);
				b[a[i]] = i, b[a[j]] = j;
			}
			else
			{
				int k = n / 2;
				ans.push_back({ k, j });
				swap(a[k], a[j]);
				b[a[k]] = k, b[a[j]] = j;
				ans.push_back({ i, k });
				swap(a[i], a[k]);
				b[a[i]] = i, b[a[k]] = k;
			}
		}
	cout << ans.size() << "\n";
	for (int i = 0;i < ans.size();i++)
		cout << ans[i].first + 1 << ' ' << ans[i].second + 1 << "\n";
}