/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/6398/
*/

#include<iostream>
#include<string>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6 + 13;

map<int, int>cnt;
string s;
int p, n;

int main()
{
	cin >> s >> p;
	n = s.size();
	for (int i = 0;i < n;i++)
		s[i] -= '0';

	ll ans = 0;
	if (p == 2 || p == 5)
	{
		for (int i = 0;i < n;i++)
			if (s[i] % p == 0)
				ans += i + 1;
		cout << ans;
		return 0;
	}

	ll power = 1; // powr of 10 modulo p in each iteration
	ll rem = 0;   // reamainder of suffixes modulo p in each iteraion
	for (int i = n - 1;i >= 0;i--)
	{
		rem = ((s[i] * power) + rem) % p;
		cnt[rem]++;
		power = power * 10 % p;
	}
	ans = cnt[0];
	for (auto i : cnt)
		ans += (ll)(i.second)*(i.second-1) / 2;
	cout << ans;
}