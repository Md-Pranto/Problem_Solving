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
bool heybro(string s){
    return (s=="Timur" || s=="miurT"|| s=="Trumi"|| s=="mriTu");
}
void solve(){
    int n; cin>>n;
    vector<int> wheel(n);
    for(int i=0;i<n;i++) cin>>wheel[i];
    for(int i=0;i<n;i++){
        int moves; cin>>moves;
        string s; cin>>s;
        int cntD=0,cntU=0;
        for(int j=0;j<moves;j++){
            if(s[j]=='D') cntD++;
            else cntU++;
        }
        if(cntD>cntU){
            cntD-=cntU;
            wheel[i]+= cntD;
        }
        else if(cntU>cntD){
            cntU-=cntD;
            wheel[i]-=cntU;
        }
    }
    for(auto digit: wheel){
        if(digit>=0 || digit%10==0) cout<<digit%10<<" ";
        else cout<<(digit%10)+10<<" ";
    }
    cout<<endl;
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}


