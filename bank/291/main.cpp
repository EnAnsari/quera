/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/169373/
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int test = 0; test < T; test++)
	{
		int a, b, r;
		cin >> a >> b >> r;
		if(b == 0)
			cout << (a == r?"Yes\n":"No\n");
		else
			cout << ((a-r)%b == 0?"Yes\n":"No\n");
	}
}