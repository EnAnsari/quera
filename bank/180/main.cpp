/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/7613/
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second

const int MAXN = 4e5 + 10;

int n, q;
ll h[MAXN], v[MAXN];
int fen[MAXN], lst[MAXN], sv[MAXN];
bool dead[MAXN];
set<pair<int, int>> st;

void add(int v) {
	for (v++; v<MAXN; v+=v&-v)
		fen[v]++;
}

int get(int v){
	int ret = 0;
	for (; v; v-=v&-v) ret += fen[v];
	return ret;
}

int main() {
	scanf("%d %d", &n, &q);
	for (int i = 0; i < n; i++) {
		scanf("%lld ", &h[i]);
		v[i] = 1;
		st.insert({(h[i] + v[i] - 1) / v[i], i});
		sv[i] = (h[i] + v[i] - 1) / v[i];
	}

	for (int i = 0; i < q; i++){
		while (st.size() && st.begin()->F <= i){
			dead[st.begin()->S] = 1;
			add(st.begin()->S);
			st.erase(st.begin());
		}

		scanf("\n");
		char type; scanf("%c ", &type);
		if (type == '?'){
			int l, r; scanf("%d %d", &l, &r), l--;
			printf("%d\n", r-l - (get(r) - get(l)));
		}
		else{
			int pos, val; scanf("%d %d", &pos, &val), pos--;
			if (dead[pos])	continue;

			h[pos] -= (i-lst[pos]) * v[pos];
			st.erase({sv[pos], pos});

			lst[pos] = i;
			v[pos] += val;
			sv[pos] = i + (h[pos] + v[pos] - 1) / v[pos];
			st.insert({sv[pos], pos});
		}
	}
	
	return 0;
}