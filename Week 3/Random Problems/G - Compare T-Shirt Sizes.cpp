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
    string s,t; cin>>s>>t;
    set<char> s1,t1;
    map<char,int> mp;
    mp['S'] = -1; mp['M'] = 2; mp['L'] = 3;
    mp['X'] = 0;
    int S=0,L=0;
    ll cns=0,cnt=0;
    int cntxs=0;
    int cntxt=0;
    for(char ch: s){
        if(ch!='X') s1.insert(ch);
        cns+= mp[ch];
        if(ch=='X') cntxs++;
        if(ch=='S') S=1;
        if(ch=='L') L=1;
    }
    for(char ch: t){
        if(ch!='X') t1.insert(ch);
        cnt+= mp[ch];
        if(ch=='X') cntxt++;
        if(ch=='S') S=1;
        if(ch=='L') L=1;
    }
    
    if(s1==t1){
        if(L){
            if(cntxs > cntxt) cout<<">";
            else if(cntxs<cntxt) cout<<"<";
            else cout<<"=";
        }
        else {
            if(cntxs > cntxt) cout<<"<";
            else if(cntxs<cntxt) cout<<">";
            else cout<<"=";
        }
    }
    else {
        if(cns<cnt) cout<<"<";
        else if(cns>cnt) cout<<">";
    }
    cout<<endl;
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
