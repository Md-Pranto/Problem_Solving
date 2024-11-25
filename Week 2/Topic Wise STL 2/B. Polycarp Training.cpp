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

int main(void){
    optimize();
    int n; cin>>n;
    multiset<int> st;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        st.insert(x);
    }
    int cnt=0;
    ll sz = st.size();
    int i=1;
    queue<int> q;
    for(auto num: st){
        q.push(num);
    }
    while(!q.empty()){
        int num = q.front(); q.pop();
        if(num>=i) {
            cnt++; i++;
        }
    }
    cout<<cnt;
    cout<<endl;
    
    return 0;
}

 
