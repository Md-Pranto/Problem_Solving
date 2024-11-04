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
    int len; cin>>len;
    string s=""; set<char> st;
    for(int i=0;i<len;i++){
        char c; cin>>c;
        s.push_back(c);
        st.insert(c);
    }
    string distinct;
    for(char c: st){
        distinct.push_back(c);
    }
//    cout<<distinct<<endl;
//    cout<<"here"<<endl;
    map<char,char> mp;
    int newLen = distinct.length();
    for(int i=0,j=newLen-1;j>=0;i++,j--){
        mp[distinct[i]] = distinct[j];
        mp[distinct[j]] = distinct[i];
    }

    //cdefors
    
    
    for(int i=0;i<len;i++){
        cout<<mp[s[i]];
    }
    cout<<endl;
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();

    return 0;
}

 
