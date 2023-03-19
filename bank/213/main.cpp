/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/18311/
*/

#include<bits/stdc++.h>

using namespace std;

const int maxn = 86400;
bool b[maxn];

int s2i(string s){
    int res = 0;
    int base = 60*60;
    int cur = 0;
    s += ":";
    for(int i = 0; i < s.length(); i ++){
        if(s[i] == ':'){
            res += cur*base;
            cur = 0;
            base /= 60;
        }else{
            cur *= 10;
            cur += s[i]-'0';
        }
    }
    return res;
}

string i2s(int x){
    string h,m,s;
    h = char((x/3600)/10+'0');
    h += char((x/3600)%10+'0');
    x %= 3600;
    m = char((x/60)/10+'0');
    m += char((x/60)%10+'0');
    s = char((x%60)/10+'0');
    s+= char((x%60)%10+'0');
    return (h+":"+m+":"+s);
}


int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 0; i < 3; i ++){
        int k; cin >> k;
        while(k--){
            string L,R; cin >> L >> R;
            int l = s2i(L);
            int r = s2i(R);
            r++;
            for(int j = l; j < r; j ++) b[j] = 1;
        }
    }
    for(int cur = 0; cur <= maxn-15*60; cur++){
        bool nd = 0;
        for(int t = 0; t < 15*60; t++){
            if(b[t+cur]){
                nd = 1;
                break;
            }
        }
        if(!nd){
            cout << i2s(cur) << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}