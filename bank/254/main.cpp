/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2597/
*/

#include <bits/stdc++.h>

using namespace std;

bool isIn(int x0, int y0, int x1, int y1, int x2, int y2) {
    return (x1 <= x0 && x0 <= x2 && y1 <= y0 && y0 <= y2);
}

int main() {
	int ans = 0;
	int n, xm, ym, xr, yr;
	cin>>xm>>ym;
	cin>>xr>>yr;
	cin>>n;
	for(int i = 0; i < n; i++) {
		int x1, y1, x2, y2;
		cin>>x1>>y1>>x2>>y2;
		if(isIn(xm, ym, x1, y1, x2, y2) != isIn(xr, yr, x1, y1, x2, y2))
			ans++;
	}
	cout<<ans;
}