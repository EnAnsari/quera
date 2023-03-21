/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2533/
*/

#include <iostream>
using namespace std;

inline int in() { int x; scanf("%d", &x); return x; }
const int N = 2002;

int main()
{
	long long p = 0;
	char c1, c2;
	cin >> c1 >> c2;
	if(c2 == 'K')
	{
		cout << 1 << endl;
		return 0;
	}
	int x1 = 0, y1 = 0, x2, y2;
	char startC2 = c2;
	bool done = 0;
	while(!done)
	{
		c1 = c2;
		cin >> c2;
		x2 = x1;
		y2 = y1;
		if(c2 == 'K')
		{
			done = 1;
			c2 = startC2;
		}
		switch(c1)
		{
			case 'E': switch(c2)
				  {
					  case 'E': x2++;	break;
					  case 'N': y2++; x2++; p++; break;
					  case 'W': y2++; p += 2; break;
				  };
				  break;
			case 'N': switch(c2)
				  {
					  case 'N': y2++; break;
					  case 'W': x2--; y2++; p++; break;
					  case 'S': x2--; p += 2; break;
				  };
				  break;
			case 'W': switch(c2)
				  {
					  case 'W': x2--; break;
					  case 'S': x2--; y2--; p++; break;
					  case 'E': y2--; p += 2; break;
				  };
				  break;
			case 'S': switch(c2)
				  {
					  case 'S': y2--; break;
					  case 'E': x2++; y2--; p++; break;
					  case 'N': x2++; p += 2; break;
				  };
				  break;
		};
		p += 1LL*x1*y2 - 1LL*x2*y1;
		x1 = x2;
		y1 = y2;
	}
	p /= 2;
	cout << p << endl;
}