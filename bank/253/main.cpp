/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2598/
*/

#include <bits/stdc++.h>

using namespace std;
#define pb push_back

template<typename T1, typename T2> T1 max(T1 a, T2 b)
{
	if(a > b) return a;
	return b;
}

template<typename T1, typename T2> T1 min(T1 a, T2 b)
{
	if(a < b) return a;
	return b;
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.first < b.first) return 0;
	if(a.first > b.first) return 1;
	return a.second < b.second;
}

const int N = 3e6;
int n;
struct segment {
	int s[N];

	void clear()
	{
		for(int i = 0; i < N; i++)
			s[i] = 0;
	}

	int get(int l, int r, int i = 0, int L = 0, int R = n)
	{
		if(l <= L && r >= R) return this->s[i];
		if(l >= r) return 0;
		int M = (L+R)/2;
		if(r <= M) return get(l, r, 2*i+1, L, M);
		if(l >= M) return get(l, r, 2*i+2, M, R);
		return max(get(l, M, 2*i+1, L, M), get(M, r, 2*i+2, M, R));
	}

	void update(int ja, int v, int i = 0, int l = 0, int r = n)
	{
		if(r-l <= 1) {
			s[i] = v;
			return;
		}
		int m = (l+r)/2;
		if(ja < m)
			update(ja, v, 2*i+1, l, m);
		else
			update(ja, v, 2*i+2, m, r);
		s[i] = max(s[2*i+1], s[2*i+2]);
	}
} seg;



int dp[N], a[N];
vector<int> ja[N];

segment seg2;
pair<int, int> LDS[N];
int dpLDS[N];

int getLDS(int *a)
{
	for(int i = 0; i < n; i++) {
		LDS[i] = {a[i], i};
	}
	seg2.clear();
	sort(LDS, LDS+n, cmp);
	int res = 0;
	for(int i = 0; i < n; i++) {

		int x = LDS[i].second;
		dpLDS[x] = seg2.get(0, x)+1;
		seg2.update(x, dpLDS[x]);
	}
	return seg2.get(0, n);
}

int main()
{
	for(int i = 0; i <= n; i++)
		ja[i].clear();
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &dp[i]);
		ja[dp[i]].pb(i);
	}

	int k = 1;
	for(int i = 1; i <= n; i++) {
		for(int j = ja[i].size()-1; j >= 0; j--) {
			a[ja[i][j]] = k++;
		}
	}

	printf("%d\n", getLDS(a));
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);

}