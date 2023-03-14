/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/7615/
*/

#include<bits/stdc++.h>

#define fi first
#define se second
#define all(X) X.begin(),X.end()
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const int maxn = 1e5 +5;
const int lg = 20;
const int mod = 1e9 + 7;

template<class T>
void min(T &_x, const T &_y) {
	_x = min(_x, _y);
}
template<class T>
void max(T &_x, const T &_y) {
	_x = max(_x, _y);
}

int n;
vector<int> edge[maxn];
int nxt[maxn];
struct num{
	int shift = 0;
	set<int> st;
	void add(int val){
		while(st.find(val) != st.end()) {
			st.erase(val);
			val++;
		}
		st.insert(val);
	}
	void clear() {
		st.clear();
	}
} dp[maxn];
int sz;
bool cmp(num &x, num &y){
	for(set<int>::reverse_iterator rit1 = x.st.rbegin(), rit2 = y.st.rbegin();
	rit1 != x.st.rend() && rit2 != y.st.rend(); 
	rit1++, rit2++){
		if(*rit1 + x.shift < *rit2 + y.shift) return true;
		if(*rit2 + y.shift < *rit1 + x.shift) return false;
	}
	return x.st.size() < y.st.size();
}
int merg(int x, int y){
	if(dp[x].st.size() < dp[y].st.size()) swap(x, y);
	for(int val : dp[y].st) dp[x].add(val + dp[y].shift - dp[x].shift);
	return x;
}
vector<pii> kf[maxn];
int dfs(int v, int p){
	for(int u : edge[v]) 
		if(u != p) kf[v].pb(pii(u, dfs(u, v)));
	if(kf[v].size() == 0){
		dp[sz].add(0);
		nxt[v] = -1;
		return sz++;
	}
	nxt[v] = kf[v][0].fi;
	int mx = kf[v][0].se;
	for(pii p : kf[v]){
		if(p.fi == nxt[v]) continue;
			if(cmp(dp[mx], dp[p.se])){
			mx = p.se;
			nxt[v] = p.fi;
		}
	}
	int x = kf[v][0].se;
	for(int i = 1; i < kf[v].size(); i++) x = merg(x, kf[v][i].se);
	dp[x].shift++;
	return x;
}

int h[maxn];
void check(int v, int p, num &x) {
	for(int u : edge[v]) if(u != p){
		h[u] = h[v] + 1;
		check(u, v, x);
	}
	if(edge[v].size() < 2) x.add(h[v]);
}

ll solve(int v, int p) {
	ll ans = 1;
	for(int u : edge[v]) if(u != p){
		if(edge[u].size() == 1) ans = ans * 2 % mod;
		else {
			ll x = solve(u, v);
			x = x * x % mod;
			ans = ans * x % mod;
		}
	}
	return ans;
}

vector<int> path;
num x1, x2;
int main() {
	cin >> n;
	for(int i = 0; i < n - 1; i++){
		int v, u;
		cin >> v >> u;
		v--;
		u--;
		edge[v].pb(u);
		edge[u].pb(v);
	}
	int v = 0;
	if(edge[0].size() == 1) v = edge[0][0];
	dfs(v, -1);
	while(v != -1){
		path.pb(v);
		v = nxt[v];
	}
	int l = 0, r = path.size();
	while(r - l > 1){
		int mid1 = (2 * l + r) / 3, mid2 = (l + 2 * r) / 3;
		x1.clear(); x2.clear();
		h[path[mid1]] = 0;
		check(path[mid1], -1, x1);
		h[path[mid2]] = 0;
		check(path[mid2], -1, x2);
		if(cmp(x1, x2)) r = mid2;
		else l = mid1 + 1;
	}
	cout << (solve(path[l], -1) + mod - 1) % mod << endl;

	return 0;
}