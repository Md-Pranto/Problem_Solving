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
    map<string,bool> mp;
    int n; cin>>n;
    deque<string> q;
    while(n--){
        string s; cin>>s;
        q.push_front(s);
    }
    while(!q.empty()){
        if(!mp[q.front()]){
            mp[q.front()] = true;
            cout<<q.front()<<endl;
        }
        q.pop_front();
    }
    
}
int main(void){
    optimize();
    int tc=1;
    while(tc--) solve();

    return 0;
}

 
