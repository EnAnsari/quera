/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/18312/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1000000007;
const int maxn = 1010;

int main(){
    int n,k; cin >> n >> k;
    if(k > 3){
        cout << 0 << endl;
    }
    if(k == 3){
        int ans = 0;
        for(int x = 1; x < n; x++) for(int y = 1; y < n-x; y++) if(__gcd(x,y) == 1) ans = (ans+n-(x+y))%mod;
        cout << ans << endl;
    }
    if(k == 2){
        cout << (n*(n-1))/2 << endl;
    }
    if(k == 1){
        cout << n << endl;
    }
    return 0;
}