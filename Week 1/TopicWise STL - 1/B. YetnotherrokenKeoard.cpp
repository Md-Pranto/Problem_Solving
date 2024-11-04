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
    string s; cin>>s;
    
    ll len  = s.length();
    vector<int> RightUpper,RightLower;
    for(int i=0;i<len;i++){
        char c = s[i];
        if(c=='b' || c=='B'){
            s[i] = '0';
            if(c=='b' && !RightLower.empty()){
                s[RightLower.back()] = '0';
                RightLower.pop_back();
            }
            if(c=='B' && !RightUpper.empty()){
                s[RightUpper.back()] = '0';
                RightUpper.pop_back();
            }
            
        }
        else if(c>='a' && c<='z'){
            RightLower.push_back(i);
        }
        else if(c>='A' && c<='Z'){
            RightUpper.push_back(i);
        }

    }
    for(int i=0;i<len;i++){
        if(s[i]=='0') continue;
        cout<<s[i];
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

 
