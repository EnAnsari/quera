/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/368/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3 + 5;
ll INF = 1e17;
ll adj[N][N], key[N];
bool seen[N];
int n, m;
ll prim(int src) {
	for (int i = 0; i < n; i++)
		key[i] = INF, seen[i] = false;
	key[src] = false;
	for (int i = 0;i<n - 1;i++) {
		int u;
		ll MIN = INF;
		for (int v = 0; v < n; v++)
			if (!seen[v] && key[v] < MIN)
				MIN = key[v], u = v;
		seen[u] = true;
		for (int v = 0; v < n; v++)
			if (adj[u][v] <  key[v] && !seen[v])
				key[v] = adj[u][v];
	}
	ll mst = 0;
	for (int u = 0;u < n;u++)
		mst += key[u];
	return mst;
}
int main() {
	scanf("%d%d", &n, &m);

	for (int i = 0;i < n;i++)
		for (int j = i + 1;j < n;j++)
			adj[i][j] = adj[j][i] = INF;

	for (int i = 0;i < m;i++) {
		int u, v;
		ll w;
		scanf("%d%d%lld", &u, &v, &w);
		u--, v--;
		adj[u][v] = adj[v][u] = w;
	}

	printf("%lld\n", prim(0));
}