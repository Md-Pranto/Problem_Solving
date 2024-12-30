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
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(is_sorted(all(v))) {
        for(auto val: v) cout<<1;
        cout<<endl;
        return;
    }
    int maxi = v[0];
    int maxiIndx = -1;
    int mini = v[0];
    int mini2nd = -1;
    bool danger = false;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(v[i]>=maxi && !danger){
            ans.push_back(1);
            maxi = v[i];
            maxiIndx = i;
        }
        else if(!danger && v[i]<=mini){
            danger = true;
            mini2nd = v[i];
            ans.push_back(1);
        }
        else if(danger){
            if(v[i]>=mini2nd && v[i]<=mini){
                mini2nd = v[i];
                ans.push_back(1);
            }
            else ans.push_back(0);
        }
        else ans.push_back(0);
    }

    for(auto val: ans) cout<<val;
    cout<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

