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
    int first =n;
    bool flag = false;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(!flag && v[i]>0) {
            first = i;
            flag = true;
        }
    }
    if(first==n){
        cout<<0<<endl; return;
    }
    ll sum=0;
    for(int i=first;i<n;i++){
        if(v[i]==0) sum++;
        else sum+=v[i];
    }
    cout<<sum<<endl;
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
