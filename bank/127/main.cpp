/*  powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/26109/
*/

#include <iostream>
using namespace std;

int main()
{
	int p1, s1, s2, p2;
	cin >> p1 >> s1 >> s2 >> p2;

	if (p1 + p2 < s1 + s2)
		cout << "Esteghlal";
	else if (p1 + p2 > s1 + s2)
		cout << "Persepolis";
	else if (p2 < s1)
		cout << "Esteghlal";
	else
		cout << ((p2 > s1) ? "Persepolis" : "Penalty");

	return 0;
}
