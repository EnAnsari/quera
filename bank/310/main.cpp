/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/1367/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<string> >s[3];

void init_vec(int text, int sent) {
	if (s[text].size() != sent + 1)
		s[text].push_back(vector<string>());
}
void add(string w, int text, int sent) {
	init_vec(text, sent);
	s[text][sent].push_back(w);
}
int main() {
	int text, sent, word;
	text = sent = word = 0;
	char c;
	string stream = "";
	while ((c = getchar()) != -1)
	{
		c = tolower(c);
		if (c == '*')
		{
			stream.clear();
			text++;
			sent = 0;
		}
		else if (c == ' ' || c == '\n' || c == ',')
			stream += ' ';
		else if (c == '.')
		{
			stringstream sstr;
			sstr << stream;
			while (!sstr.eof())
			{
				string w;
				sstr >> w;
				if (w != "")
					add(w, text, sent);
			}
			sent++;
			stream.clear();
		}
		else
			stream += c;
	}
	text++;

	for (int i = 0;i<text;i++)
		for (int j = 0;j < s[i].size();j++)
			sort(s[i][j].begin(), s[i][j].end());

	for (int i = 0;i<text;i++)
		sort(s[i].begin(), s[i].end());

	bool equal = s[0].size() == s[1].size();
	for (int i = 0;equal && i < s[0].size();i++)
		if (s[0][i] != s[1][i])
			equal = false;

	if (equal)
		cout << "this is cop\n";
	else
		cout << "this is not cop\n";
}