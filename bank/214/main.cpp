/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/18310/
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t; cin >> s >> t;
    for(int st = 0; st < s.length(); st ++){
        bool ok = 1;
        for(int j = 0; j < t.length(); j++) if(s[(st+j)%s.length()] != t[j]) ok = 0;
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}