/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2599/
*/

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
typedef long double dbl;

const int N = 1e6;
int n;
dbl w[N], ans[N], sum[N];
vector<int> child[N];

void dfs(int v)
{
	for(int u: child[v]) {
		dfs(u);
		sum[v] += ans[u];
	}
	dbl probSel = dbl(1)/child[v].size();
	for(int u: child[v]) {
		ans[v] += probSel*(w[u]+sum[u]+sum[v]-ans[u]);
	}
}

int main()
{
	cin>>n;
	for(int i = 0; i <= n; i++)
		w[i] = ans[i] = sum[i] = 0;
	for(int i = 0; i < n; i++)
		cin>>w[i];
	for(int i = 1; i < n; i++) {
		int par;
		cin>>par;
		par--;
		child[par].pb(i);
	}
	dfs(0);
	cout<<setprecision(12)<<fixed<<ans[0]<<'\n';
}