/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/7612/
*/

#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

int n, m, q, g, comp[MAXN];
vector<int> adj[MAXN];
bool fl, col[MAXN], vis[MAXN], fail[MAXN];

void dfs(int v, bool c = 0){
	if (vis[v]){
		if (c != col[v]) fl = 1;
		return;
	}
	vis[v] = 1;
	col[v] = c;
	comp[v] = g;
	for (int u:adj[v])
		dfs(u, !c);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m >> q;
	while (m--){
		int a, b;
		cin >> a >> b, a--, b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 0; i < n; i++)
		if (!vis[i]) {
			fl = 0;
			dfs(i);
			fail[g] = fl;
			g++;
		}
	while (q--) {
		int u, v; cin >> u >> v, u--, v--;
		if (fail[comp[u]])
			cout << "impossible\n";
		else{
			if (comp[u] ^ comp[v])
				cout << "independent\n";
			else if (col[u] == col[v])
				cout << "cw\n";
			else
				cout << "ccw\n";
		}
	}

	return 0;
}