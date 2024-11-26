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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    vector<int> arr(26,0);
    for(int i=0;i<n;i++){
        int indx = s[i]-'a';
        arr[indx]++;
    }
    int oddCnt=0;
    for(int i=0;i<26;i++){
        if(arr[i]&1) oddCnt++;
    }
    int miniRemove = oddCnt-1;
    if(miniRemove>k){
        cout<<"NO"; return;
    }
    if(k==miniRemove || k==oddCnt || oddCnt==0) {
        cout<<"YES"; return;
    }
    else if(k>oddCnt){
        cout<<"YES"; return;
    }
    cout<<"NO";
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--){
        solve(); cout<<endl;
    }
    
    
    return 0;
}
