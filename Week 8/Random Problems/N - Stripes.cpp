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
typedef long long ll;
typedef unsigned long ul;
#define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file

void solve() {
    char g[8][8];
    vector<int> r;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> g[i][j];
            if (g[i][j] == 'R') r.push_back(i);
        }
    }
    for (int i : r) {
        bool ok = true;
        for (int j = 0; j < 8; j++) {
            if (g[i][j] != 'R') {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "R"<<endl;
            return;
        }
    }
    cout << "B"<<endl;
}

int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

