#include<bitset>
#include<set>
#include<stdio.h>
#include<string.h>
#include<stack>
#include<queue>
#include<cstring>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include <iostream>
#include<utility>
#include<climits>
#include<numeric>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;

#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed, ios::floatfield);
#define file() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

// Optimize is not allowed when taking input from input.txt file

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    map<int, int> mp;
    vector<int> maxi(n + 1, 0);

    for (int i = 0; i < n; i++) {
        if (mp.find(v[i]) == mp.end()) {
            maxi[v[i]] = i;
            mp[v[i]] = i;
        } else {
            int diff = i - mp[v[i]] - 1;
            maxi[v[i]] = max(maxi[v[i]], (int)ceil(diff / 2.0));
            mp[v[i]] = i;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (mp.find(i) == mp.end()) {
            maxi[i] = n;
        } else {
            maxi[i] = max(maxi[i], n - mp[i] - 1);
        }
    }

    int mini = LLONG_MAX;
    int miniI = -1;

    for (int i = 1; i <= n; i++) {
        if (maxi[i] < mini) {
            mini = maxi[i];
            miniI = i;
        }
    }

    cout << miniI << " " << mini << endl;
}

int32_t main(void) {
    optimize();
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
