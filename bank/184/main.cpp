/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/7610/
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pll pair <ll , ll>

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair

#define X first
#define Y second

#define LB(x) (x & (-x))
#define BIT(a,b) ((ll)(a&(1<<b))==0 ? false : true)

const ll MAXN=3e3+10;

vector <ll> vertex[MAXN][30];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    for(ll i = 0; i < m; i++) {
        ll v, u;
        char c;
        cin >> v >> u >> c;
        vertex[v][c - 'a'].pb(u);
    }

    ll p = 1;

    for(ll i = 0; i < s.size(); i++) {
        ll c = s[i] - 'a';
        if (vertex[p][c].size() == 0) {
            for(ll j = i; j < s.size(); j++) {
                cout << s[j];
            }
            return 0;
        }
        else p = vertex[p][c][0];
    }

    cout << -1;

	return 0;
}