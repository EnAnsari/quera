/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/170856/
*/

#include <bits/stdc++.h>

using namespace std;

bool palindrom(string s) {
	return s == string(s.rbegin(), s.rend());
}

bool check(int n) {
	stringstream ss, ss1, ss2, ss3;
	ss1 << n;
	ss2 << hex << n;
	ss << bitset<20>(n);
	ss3 << stoi(ss.str());
	return palindrom(ss1.str()) + palindrom(ss2.str()) + palindrom(ss3.str()) >= 2;
}

int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		cout << (check(n) ? "Magical\n" : "I'm sorry Sherlock :(\n");
	}
    return 0;
}