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
    string s; cin>>s;
    string ans="";
    for(int i=0;i<n;i++){
        if(i<=n-4 && s[i+2]=='0' && s[i+3]=='0'){
            int num = stoi(s.substr(i,1));
            ans+=(char)('a'+num-1);
            i++;
            num = stoi(s.substr(i,2));
            ans+=(char)('a'+ num-1);
            i++;i++;
            
        }
        else if(i<=n-3 && s[i+2]=='0'){
            int num = stoi(s.substr(i,2));
            ans+=(char)('a'+ num-1);
            i++;i++;
        }
        else {
            int num = stoi(s.substr(i,1));
            ans+=(char)('a'+num-1);
            
        }
    }
    cout<<ans<<endl;
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}
