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
    int k; cin>>k;
    string s; cin>>s;
    bool flag = false;
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[j]<s[i]){
            flag = true; break;
        }
        else if(s[j]==s[i]){
            i++; j--;
            continue;
        }
        break;
    }
    //cout<<flag<<endl;
    string temp = s;
    reverse(s.begin(),s.end());
    swap(temp,s);
    if(!flag){
        cout<<s;
    }
    else if(flag){
        cout<<temp<<s;
    }
    cout<<endl;
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
