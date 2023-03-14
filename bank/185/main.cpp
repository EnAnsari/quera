/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/7609/
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int res;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        res = 1;
        while(i < s.size() && s[i] == s[i + 1])
            res++ , i++;
        if(res & 1)
        {
            cout << "bad";
            return 0;
        }
    }
    cout << "khoob";
}