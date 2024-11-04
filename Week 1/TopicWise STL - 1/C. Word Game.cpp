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
    map<string,int> mp;
    string s;
    vector<string> v[3];
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>s; mp[s]++;
            v[i].push_back(s);
        }
    }
//    cout<<endl;
//    for(auto it: mp){
//        cout<<it.first<<" "<<it.second<<endl;
//    }
//  cout<<endl;
    for(int i=0;i<3;i++){
        int cnt=0;
        for(string s: v[i]){
            //cout<<s<<" "<<mp[s]<<" ";
            if(mp[s]==3) continue;
            if(mp[s]==2) cnt+=1;
            else if(mp[s]==1) cnt+=3;
        }
        cout<<cnt<<" ";
    }
    cout<<endl;
}
int main(void){
    optimize();
    int tc=1;
    cin>>tc;
    while(tc--) solve();

    return 0;
}

 
