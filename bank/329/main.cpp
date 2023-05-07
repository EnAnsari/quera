/*
	powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/3415/
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> phones(n);
    for (int i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;
        phones[i] = make_pair(p, q);
    }

    int good_phones = 0;
    for (auto phone : phones) {
        bool is_good = true;
        for (auto other_phone : phones) {
            if (phone != other_phone && other_phone.first <= phone.first && other_phone.second >= phone.second) {
                is_good = false;
                break;
            }
        }
        if (is_good) {
            good_phones++;
        }
    }
    
    cout << good_phones << endl;
    return 0;
}