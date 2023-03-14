/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/6374/
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
	cin >> s;
	bool flg = 0;
	for(int i = (int)s.size() - 1; i >= 0; i--) {
		if(s[i] != 'F') {
            s[i]++;
            flg = 1;
            break;
        }
		s[i]='0';
	}
	if(!flg) cout << '1' + s;
	else cout << s;

	return 0;
}