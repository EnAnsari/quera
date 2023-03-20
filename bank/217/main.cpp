/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/10171/
*/

#include <bits/stdc++.h>
using namespace std;
const int maxn = 100100, mod = 1e9 + 7, maxa = 1e6 + 100, maxb = 23, maxs = 340;
const long long inf = 2e18 + 13;
long long max(long long x, long long y){return (x > y ? x : y);}
long long min(long long x, long long y){return (x < y ? x : y);}

vector <pair<int, int> > v;
vector <int> arr;

long long dp[maxn];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, -b));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        arr.push_back(-v[i].second);
    }
    reverse(arr.begin(), arr.end());
    fill(dp, dp + maxn, 1e18);
    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
        int k = upper_bound(dp, dp + maxn, arr[i]) - dp;
        dp[k] = arr[i];
        ans = max(ans, k + 1);
    }
    cout << ans << endl;
    return 0;
}