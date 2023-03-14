/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/7614/
*/

#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
#define X first
#define Y second
#define all(o) o.begin(), o.end()
#define IOS ios::sync_with_stdio(0), cin.tie(0)
const int maxn = 1000 + 10, W = 30;
const int N = maxn * maxn;
int d[maxn][maxn], nxt[W][maxn], n, m;
string S;
pii q[N];
void bfs(int rem,int st){
    memset(d, 63, sizeof d);
    int h = 0, t = 0;
    q[t++] = {rem, st};
    d[rem][st] = 0;
    while(h < t){
        pii v = q[h++];
        int r = v.X, s = v.Y;
        if(r == 0) continue;
        int x = S[S.size() - r] - 'a';
        for(int i=0; i<26; i++){
            if(i != x && nxt[i][s] == -1) continue;
            if(i == x){
                int nr = r - (nxt[x][s] == -1), ns = (nxt[x][s] != -1 ? nxt[x][s] : s);
                if(d[r][s] + 1 < d[nr][ns]){
                    d[nr][ns] = d[r][s] + 1;
                    q[t++] = {nr, ns};
                }
                continue;
            }
            int nr = r, ns = nxt[i][s];
            if(d[r][s] + 1 < d[nr][ns]){
                d[nr][ns] = d[r][s] + 1;
                q[t++] = {nr, ns};
            }
        }
    }
}
int main(){
    IOS;
    cin >> n >> m;
    cin >> S;
    memset(nxt, -1, sizeof nxt);
    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        char c;
        cin >> c;
        nxt[c - 'a'][u] = v;
    }
    bfs(S.size(), 0);
    int ans = 1e9;
    for(int i=0; i<n; i++)
        ans = min(ans, d[0][i]);
    if(ans == int(1e9)) ans = -1;
    cout << ans << endl;

	return 0;
}