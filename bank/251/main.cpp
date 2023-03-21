/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2600/
*/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
const int MAXN = 2e6+10;
const int N = 2e3+10;
int n, m;

struct edge {
	int a, b, c, t;
} e[MAXN];


int c[N][N];
int w[N][N];
vector<int> adj[MAXN], adjr[MAXN];
vector<int> ad[MAXN];
map<int, vector<int>> adC[MAXN];
vector<int> s[MAXN];
bool mark[MAXN];
int mo[MAXN], res[MAXN];
vector<int> ans;

void addEdge(int v, int u)
{
	adj[v].pb(u);
	adjr[u].pb(v);
}

void addClouse(int a, int b)
{
	addEdge(a^1, b);
	addEdge(b^1, a);
}


void dfs(int u, vector<int> *adj, vector<int> &out)
{
	if(mark[u]) return;
	mark[u] = true;
	for(int v: adj[u]) {
		dfs(v, adj, out);
	}
	out.pb(u);
}


bool check(int ma)
{
	for (int i = 0; i < MAXN; i++) {
		adj[i].clear();
		adjr[i].clear();
		s[i].clear();
		ad[i].clear();
		adC[i].clear();
	}

	int M = m;


	for(int i = 0; i < m; i++) {
		auto x = e[i];
		if(x.t > ma) {
			addClouse((i<<1), (i<<1)); // not x
		}
		ad[x.a].pb(i);
		ad[x.b].pb(i);
		adC[x.a][x.c].pb(i);
		adC[x.b][x.c].pb(i);
		if(adC[x.a][x.c].size() > 2) return false;
		if(adC[x.b][x.c].size() > 2) return false;
	}
	for(int i = 0; i < n; i++) {
		for (auto vvc: adC[i]) {
			auto vc = vvc.second;
			if(vc.size() == 2) {
				addClouse((vc[0]<<1)+1, (vc[1]<<1)+1);
			}
		}

		if (ad[i].size() > 1) {
			addClouse(ad[i][0]<<1, (M<<1)+1);
			M++;
			for(int j = 1; j < ad[i].size(); j++) {
				addClouse((M-1)<<1, ad[i][j]<<1);
				addClouse((M-1)<<1, (M<<1)+1);
				addClouse(ad[i][j]<<1, (M<<1)+1);
				M++;
			}
		}
	}

	M++;
	M++;
	fill(mark, mark+MAXN, false);
	int cnt = 0;
	vector<int> order;
	{
		// SCC
		for(int i = 0; i < M+M; i++)
			dfs(i, adj, order);
		fill(mark, mark+MAXN, 0);
		for(int i = order.size()-1; i >= 0; i--)
			if(!mark[order[i]]) {
				dfs(order[i], adjr, s[cnt]);
				for(int u: s[cnt]) {
					mo[u] = cnt;
				}
				++cnt;
			}
	}


	for(int i = order.size()-1; i >= 0; i--) {
		int u = order[i];

		if(mo[u] == mo[u^1]) {
			return false;
		}
	}

	return true;
}

int main()
{
	scanf("%d", &n);

	int l = 0, r = 0;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &c[i][j]);
		}
	}

	m = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &w[i][j]);
			r = max(r, w[i][j]+1);
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			e[m] = (edge) {
				i, n+j, c[i][j], w[i][j]
			};
			m++;
		}
	}
	n = n+n;


	if(!check(1000000001)) {
		printf("No\n");
		return 0;
	}


	while(r > l) {
		int mid = (l+r)/2;
		if(check(mid)) {
			r = mid;
		} else {
			l = mid+1;
		}
	}

	printf("Yes\n%d", l);

}