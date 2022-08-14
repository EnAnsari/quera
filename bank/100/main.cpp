/*  powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/44077/
*/

#include <iostream>
#include <math.h>
#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	long double a, b, c, d;
	cin >> a >> b >> c >> d;

	long double s = (a + b + c + d) / 2;
	cout << setprecision(12) << sqrt((s - a) * (s - b) * (s - c) * (s - d));

	return 0;
}
