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
#define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    string s; cin>>s;
    int n = 26;
    vector<int> arr(n,0);
    for(auto ch: s){
        int indx = ch-'A';
        arr[indx]++;
    }
    int oddcnt=0;
    int oddIndx = -1;
    for(int i=0;i<n;i++){
        if(arr[i]&1) {
            oddIndx = i;
            oddcnt++;
        }
    }
    if(oddcnt>1){cout<<"NO SOLUTION"<<endl; return;}
    for(int i=0;i<26;i++){
        char ch = (char)'A'+i;
        for(int j=0;j<arr[i]/2;j++){
            cout<<ch;
        }
    }
    
    if(oddIndx!=-1) cout<<(char)('A'+oddIndx);
    for(int i=n-1;i>=0;i--){
        char ch =(char) 'A'+i;
        for(int j=0;j<arr[i]/2;j++){
            cout<<ch;
        }
    }
    cout<<endl;
}
int32_t main(void){
    optimize();
    int tc = 1; //cin>>tc;
    clock_t z = clock();
    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}

