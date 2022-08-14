/*  powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/44080/
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int ajnas[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ajnas[i];
	}

	sort(ajnas, ajnas + n);

	int tedad = -1;
	if (n == 1)
	{
		tedad = 1;
	}
	else
	{
		for (int i = 1; i < n; i++)
		{
			if (ajnas[i] + ajnas[i - 1] > x)
			{
				tedad = i;
				break;
			}
		}
	}

	if (tedad == -1)
	{
		tedad = n;
	}

	cout << tedad;
	return 0;
}
