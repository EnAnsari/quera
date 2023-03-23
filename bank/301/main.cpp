/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/3418/
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 13;
bool seen[N];
int a[N];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n;i++)
		scanf("%d", a + i);
	int ans = 1;
	seen[1] = 1;
	for (int i = 0;i < n;i++)
	{
		int j = 1;
		for (;j*j < a[i];j++)
		{
			if (a[i] % j == 0)
			{
				if (seen[j])
					ans = max(ans, j);
				if (seen[a[i] / j])
					ans = max(ans, a[i] / j);
				seen[j] = seen[a[i] / j] = true;
			}
		}
		if (j*j == a[i])
		{
			if (seen[j])
				ans = max(ans, j);
			seen[j] = true;
		}
	}
	cout << ans;
}