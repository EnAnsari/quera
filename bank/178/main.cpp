/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/170855/
*/

#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tc;
	cin >> tc;
	while (tc--) {
		int r, w, h;
		cin >> r >> w >> h;
		if (w * w + h * h <= 4 * r * r)
			cout << "Pizza fits on the table.\n";
		else cout << "Pizza does not fit on the table.\n";
	}
	
    return 0;
}