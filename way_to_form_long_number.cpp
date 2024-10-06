#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main() {
    optimize();
    int n; cin >> n;
    vector<string> str(n);
    for(auto &i : str) cin >> i ;
    sort(str.begin(), str.end(), [](string a, string b) {
        return a + b > b + a;
    });
    if (str[0] == "0") cout << "0" << nl;
    else {
        for (auto &u : str) cout << u;
        cout << nl;
    }
    return 0;
}
