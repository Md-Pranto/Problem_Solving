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
    int win,draw,lose,total; cin>>win>>draw>>lose;
    total = win+draw+lose;
    int already = win*2+draw*1;
    int opponent = total*2-already;
    int canget = (4-total)*2;
    //cout<<already<<" "<<canget<<" "<<opponent<<endl;
    if(already+canget<=opponent) cout<<"NO";
    else cout<<"YES";
    cout<<endl;
    
}

int main(void){
    optimize();
    int tc=1; //cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}

