/*  powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/52546/
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

	string a;
	cin >> a;
	int alen = a.length();

	int n;
	cin >> n;

	string rs[n];
	for (int i = 0; i < n; i++)
		cin >> rs[i];

	int tedad = 0;
	for (int i = 0; i < n; i++)
	{
		int slen = rs[i].length();
		bool e = false, shamel = false;
		int idx = 0;
		for (int j = 0; j < slen; j++)
		{
			if (rs[i][j] == a[idx])
			{
				idx++;
			}

			if (idx == alen)
			{
				tedad++;
				break;
			}
		}
	}

	cout << tedad;
}
