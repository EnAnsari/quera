/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/72880/
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, m, a1, a2;
    cin >> a >> b >> c >> d >> m;

    if (c * m + a > d * m + b) a1 = 1;
    else a1 = 2;

    if (m * c > m * d) a2 = 1;
    else a2 = 2;

    if (a1 == a2) cout << "Eyval baba!" << endl;
    else cout << "Naaa, eshtebahe!" << endl;
	
	return 0;
}