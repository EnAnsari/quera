/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2436/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define double long double
#define IT map<S, double>::iterator
ll INFLL = 9e18;
struct S {
	ll m, b;
	S() :m(0), b(0) {}
	S(ll m, ll b) :m(m), b(b) {}
	bool operator<(S s) const { return make_pair(m, b) < make_pair(s.m, s.b); }
};
struct CHT {
	map<S, double>lef;
	map<double, S>s;
	IT beg, end, it1, it2, it3, it4, it5;
	CHT() {}
	bool bad(S l1, S l2, S l3) {
		return (l3.b - l1.b)*(l1.m - l2.m) <= (l2.b - l1.b)*(l1.m - l3.m);
	}
	double intx(S l1, S l2) {
		return (double)(l2.b - l1.b) / (l1.m - l2.m);
	}
	void calcit(IT ins) {
		it1 = it2 = it3 = it4 = it5 = ins;
		end = lef.end(); end--; beg = lef.begin();
		if (it3 != beg)	it2--;
		if (it2 != beg) it1--, it1--;
		if (it3 != end) it4++;
		if (it4 != end) it5++, it5++;
	}
	void add(ll m, ll b) {
		auto ins = lef.insert({ S(m,b),0 });
		if (ins.second == false) return;
		calcit(ins.first);
		if (it3 != beg && it3->first.m == it2->first.m) {
			s.erase(it2->second);
			lef.erase(it2);
			if (it3 != end) s.erase(it4->second);
		}
		else if (it3 != end && it3->first.m == it4->first.m) {
			lef.erase(it3);
			return;
		}
		calcit(it3);
		if (it3 != beg && it3 != end && bad(it2->first, it3->first, it4->first)) {
			lef.erase(it3);
			return;
		}
		while (it2 != beg && bad(it1->first, it2->first, it3->first)) {
			it1--;
			auto del = it2;
			it2--;
			s.erase(del->second);
			if (it3 != end) s.erase(it4->second);
			lef.erase(del);
		}
		while (it4 != end && bad(it3->first, it4->first, it5->first))
		{
			it5++;
			auto del = it4;
			it4++;
			s.erase(del->second);
			s.erase(it4->second);
			lef.erase(del);
		}
		if (it3 == beg) {
			it3->second = -INFLL;
			s[-INFLL] = it3->first;
		}
		else {
			it3->second = intx(it2->first, it3->first);
			s[intx(it2->first, it3->first)] = it3->first;
			if (it3 != end) s.erase(it4->second); // -_-
		}
		if (it3 != end) {
			it4->second = intx(it4->first, it3->first);
			s[intx(it4->first, it3->first)] = it4->first;
		}
	}
	ll query(ll x) {
		auto it = s.upper_bound(x);
		it--;
		return it->second.m*x + it->second.b;
	}
};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n;
	cin >> m >> n;
	CHT cht;
	for (int i = 0;i < m;i++)
	{
		ll s, v;
		cin >> s >> v;
		cht.add(v, s);
	}
	for (int i = 0;i < n;i++)
	{
		ll t;
		cin >> t;
		cout << cht.query(t) << ' ';
	}
}