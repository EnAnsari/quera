/*
	powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/10170/
*/

#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
const long long INF=1e9+10,MAX=100,MOD=1e9+7;
typedef long long ll;
typedef pair<ll,ll> pii;
typedef pair<pii,ll> piii;
void OUT(long double o,int x){
	 cout<<fixed<<setprecision(x)<<o;
	 return;
}
char a[MAX][MAX];
ll X[20]={0,-1,1,0};
ll Y[20]={-1,0,0,1};
ll n,m,di[20][20];
vector<pii> vec[20];
void dfs0(pii v,int d){
	a[v.F][v.S]=char(int('0')+d);
	for(int i=0;i<4;i++){
		if((v.F+X[i]<=n and v.F+X[i]>0) and  (v.S+Y[i]<=m and (v.S+Y[i]>0 and a[v.F+X[i]][v.S+Y[i]]=='X')))
			dfs0({v.F+X[i],v.S+Y[i]},d);
	}
	return;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	}
	ll d=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='X'){
				dfs0({i,j},d);
				d++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='0')
				vec[0].pb({i,j});
			if(a[i][j]=='1')
				vec[1].pb({i,j});
			if(a[i][j]=='2')
				vec[2].pb({i,j});
		}
	}
	ll mi=INF;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='.'){
				ll ans=0;
				for(int k=0;k<3;k++){
					ll q=INF;
					for(pii h:vec[k])
						q=min(q,abs(i-h.F)+abs(j-h.S));
					ans+=q;
				}
				mi=min(ans-2,mi);
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			ll ans=INF;
			for(pii k:vec[i]){
				for(pii h:vec[j])
					ans=min(ans,abs(k.F-h.F)+abs(k.S-h.S));
			}
			di[i][j]=ans;
		}
	}
	mi=min(mi,di[0][1]+di[0][2]-2);
	mi=min(mi,di[0][1]+di[1][2]-2);
	mi=min(mi,di[1][2]+di[0][2]-2);
	cout<<mi;
	return 0;
}