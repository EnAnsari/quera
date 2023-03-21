/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/140029/
*/

#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define MP make_pair
#define PII pair<int,int>
#define PB push_back
#define ll long long
#define int long long 
#define db long double

const int N=1e5+100;

string s; 

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>s; 
	bool flag=false; 
	for(int i=0;i<s.size();i++){
		if(s[i]=='1')flag=true; 
		if(flag)cout<<s[i];
	}
	if(!flag)cout<<"0";
	cout<<"\n";
	return 0;
} 