/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2433/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define double long double
const int N = 1e3 + 10;
string s;

bool checkSP() {
	int first = -1;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			s = s.substr(i);
			break;
		}
	}
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] != ' ') {
			s = s.substr(0, i + 1);
			break;
		}
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			return 0;
		}
	}
	return 1;
}
bool checkPlus()
{
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '+' || s[i] == '-')
		{
			cnt++;
			if (!(i == 0 || s[i - 1] == 'E' || s[i - 1] == 'e'))
				return 0;
		}
	}
	return cnt <= 2;
}
bool checkPow()
{
	for (int i = 0; i < s.size(); i++)
	{
		bool flag = 1;
		if (s[i] == 'e' || s[i] == 'E')
			for (int j = i + 1; j < s.size(); j++)
				if (s[j] == '.')
					return 0;
	}
	return 1;
}
bool is_digit(char c)
{
	return !(c >= '0' && c <= '9');
}
bool checkDec()
{
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == '.')
		{
			cnt++;
			if (i == 0 || i == s.size() - 1 || is_digit(s[i - 1]) || is_digit(s[i + 1]))
				return 0;
		}

	return cnt <= 1;
}
bool tedadeE() {
	int e = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'e' || s[i] == 'E') {
			e++;
		}
	}
	return e <= 1;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (getline(cin, s)) {
		bool ans = 1;
		if (!checkSP()) {
			cout << "ILLEGAL\n";
			continue;
		}
		if (!checkPlus()) {
			cout << "ILLEGAL\n";
			continue;
		}
		if (!checkPow()) {
			cout << "ILLEGAL\n";
			continue;
		}
		if (!checkDec()) {
			cout << "ILLEGAL\n";
			continue;
		}
		if (!checkPow()) {
			cout << "ILLEGAL\n";
			continue;
		}
		if (!tedadeE()) {
			cout << "ILLEGAL\n";
			continue;
		}
		cout << "LEGAL\n";
	}
}