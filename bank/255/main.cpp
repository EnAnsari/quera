/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/15129/
*/

#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define MP make_pair
#define PII pair<int,int>
#define PB push_back
#define int long long
#define db long double 

const int N=1e5+100;

int p[N];
int n; 
set<int> s; 
set<int>::iterator it; 

bool check2(int x){
	s.clear(); 
	s.insert(0);
	s.insert(n+1);
	for(int i=0;i<x;i++){
		s.insert(p[i]);
	}
	for(int i=x,a,b;i<n;i++){
		it=s.lower_bound(p[i]);
		a=*it; 
		it--;
		b=*it; 
		if(a-b-1>=x)return true; 
		s.insert(p[i]);
		s.erase(p[i-x]);
	}
	return false; 
}

bool check(int x){
	if(check2(x))return true; 
	reverse(p,p+n);
	if(check2(x))return true; 
	return false; 
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n; 
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	int l=0,r=n+1;
	while(r-l>1){
		int mid=(l+r)/2;
		if(check(mid)){
			l=mid;
		}else{
			r=mid; 
		}
	}
	cout<<l<<"\n";
	n--;
	if(l==(int)sqrt(n)){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
	}
	return 0;
} 