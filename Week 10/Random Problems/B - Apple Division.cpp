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
int dif = INT_MAX;
void knapsack(vector<int> &v,int i,int sum1,int sum2,int n){
    if(i==n){
        dif = min(abs(sum1-sum2),dif);
        return;
    }
    knapsack(v, i+1, sum1+v[i], sum2, n);
    knapsack(v, i+1, sum1, sum2+v[i], n);
}
void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    knapsack(v, 0, 0, 0, n);
    cout<<dif<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; //cin>>tc;
    //clock_t z = clock();
    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}

