/*
	powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/170059/
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, ans = 0;
    cin >> a >> b;
    if (a % 2 != b % 2) {
        ans++;
    }
    if (ceil(a/2.0) != ceil(b/2.0)) {
        ans++;
    }
    cout << ans;
    return 0;
}