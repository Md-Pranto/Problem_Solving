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
    string s,t;
    map<string,string> mp;
    map<string,string> rev_mp;
    for(int i=0;i<n;i++){
        cin>>s>>t;
        if(mp.find(s)==mp.end() && rev_mp.find(s)==rev_mp.end()){
            mp[s] = t;
            rev_mp[t] = s;
        }
        else if(rev_mp.find(s)!=rev_mp.end()){
            string temp = rev_mp[s];
            mp[temp] = t;
            rev_mp[t] = temp;
        }
    }
    cout<<mp.size()<<endl;
    for(auto [key,value]: mp){
        cout<<key<<" "<<value<<endl;
    }
    
}
int main(void){
    optimize();
    int tc; tc = 1;
    while(tc--) solve();
    
    
    return 0;
}

 
