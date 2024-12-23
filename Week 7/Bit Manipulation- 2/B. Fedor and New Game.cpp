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
string intToBit(int num){
    string s="";
    while(num>0){
        if(num&1) s+='1';
        else s+='0';
        num/=2;
    }
    reverse(all(s));
    return s;
}
void solve(){
    int n,m,k; cin>>n>>m>>k;
    m++;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    vector<string> ans;

    for(int j=0;j<m-1;j++){
        ans.push_back(intToBit(v[m-1]^v[j]));
    }

    int cnt=0;
    int sz = ans.size();
    for(int i=0;i<sz;i++){
        int temp = 0;
        int len = ans[i].size();
        for(int j=0;j<len;j++){
            if(ans[i][j]=='1') temp++;
        }
        if(temp<=k) cnt++;
    }
    cout<<cnt<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; //cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
