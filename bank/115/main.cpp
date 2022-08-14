/*  powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/15710/
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 2; i <= n; i += 2)
	{
		cout << i << " ";
	}

	for (int i = 1; i <= n; i += 2)
	{
		cout << i << " ";
	}

	return 0;
}
