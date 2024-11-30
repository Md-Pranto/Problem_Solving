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
#define endl '\n'

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file
bool flag = false;
bool cmp(pair<char,int> p1,pair<char,int> p2){
    return p1.first<p2.first;
}
void solve() {
    map<char, int> mp;
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        mp[c] = i + 1;
    }

    vector<pair<char, int>> ans; // Modified to store pairs of char and int
    string s;
    cin >> s;
    int sz = s.size();
    int mini = abs(mp[s[0]] - mp[s.back()]);
    bool flag = true;
    if (mp[s[0]] - mp[s.back()] > 0) flag = false;

    if (mini == 0) {
        for (int i = 0; i < sz; i++) {
            if (s[i] == s[0]) ans.push_back({s[i], i + 1});
        }
    } else if (mp[s[0]] < mp[s.back()]) {
        for (int i = 0; i < sz; i++) {
            if (s[i] >= s[0] && s[i] <= s.back()) {
                ans.push_back({s[i], i + 1});
            }
        }
    } else if (mp[s[0]] > mp[s.back()]) {
        for (int i = 0; i < sz; i++) {
            if (s[i] <= s[0] && s[i] >= s.back()) {
                ans.push_back({s[i], i + 1});
            }
        }
    }
    
    cout << mini <<" "<< ans.size() << endl;
    sort(ans.begin()+1,ans.end()-1,cmp);
//    for(auto p: ans){
//        cout<<p.first<<" "<<p.second<<endl;
//    }
    sz = ans.size();
    if (mp[s[0]] <= mp[s.back()]) {
        
        for(auto p: ans){
            cout<<p.second<<" ";
        }
        
    } else if (mp[s[0]] > mp[s.back()]) {
        cout<<ans[0].second<<" ";
        
        for(int i=sz-2;i>0 && sz>2;i--){
            cout<<ans[i].second<<" ";
        }
        //cout<<"HER"<<endl;
        cout<<ans.back().second;
    }
    cout << endl;
}
//saaaaaab
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}
