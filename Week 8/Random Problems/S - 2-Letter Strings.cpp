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

void solve(){
    int n;
    cin >> n;
    vector<string> s(n);
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    map<string, int> freq1;
    map<string, int> freq2;
    map<string, int> fullFreq;
    
    int ans = 0;

    for (int i = 0; i < n; i++) {
        string str = s[i];

        string key1 = str;
        key1[1] = '*';

        string key2 = str;
        key2[0] = '*';

        ans += freq1[key1] + freq2[key2] - 2* fullFreq[str];

        freq1[key1]++;
        freq2[key2]++;
        fullFreq[str]++;
    }
    
    cout << ans << endl;
}

int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

