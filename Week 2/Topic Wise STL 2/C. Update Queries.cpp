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
//struct haha{
//    char alphabet;
//    int index;
//};
//bool cmp(haha &h1,haha &h2){
//    return h1.alphabet> h2.alphabet;
//}
void solve(){
    int n,m; cin>>n>>m;
    string asol,updater; cin>>asol;
    multiset<int> st;
    priority_queue<char,vector<char>,greater<char>>pq;
    for(int i=0;i<m;i++){
        int a; cin>>a;
        st.insert(a);
    }
    cin>>updater;
    for(int i=0;i<m;i++){
        pq.push(updater[i]);
    }
    

    while(!st.empty()){
        int top = *st.begin();
        char ch = pq.top();
        pq.pop();
        asol[top-1] = ch;
        st.erase(top);
    }
    
    
    cout<<asol<<endl;
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    cout<<endl;
    
    return 0;
}
