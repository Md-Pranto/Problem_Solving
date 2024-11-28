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

void solve(){
    int n; cin>>n;
    string s;
    stack<string> q;
    for(int i=0;i<n;i++){
        cin>>s;
        q.push(s);
    }
//    while(!q.empty()){
//        cout<<q.top()<<" "; q.pop();
//    }
    map<string,bool> mp;
    string ans = "";
    for(int i=0;i<n ;i++){
        string temp = q.top(); q.pop();
        if(mp.find(temp)==mp.end()){
            mp[temp] = true;
            char c2 = temp.back(); temp.pop_back();
            char c1 = temp.back();
            ans+=c1; ans+=c2;
        }
    }
    
   cout<<ans<<endl;
}
//NEALMPUSOXIT
//WINE TERMINAL GIMP NAUTILUS FIREFOX GEDIT
int main(void){
    optimize();
    int tc=1; //cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}

