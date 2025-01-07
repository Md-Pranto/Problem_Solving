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
int n,q;
int cnt=1;

void solve(){
    cin>>n>>q;
    if(n==0 && q==0) return;
    
    cout<<"CASE# "<<cnt<<":"<<endl;
    multiset<int> ml;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        ml.insert(a);
        
    }
    while(q--){
        int finder; cin>>finder;
        auto it = ml.find(finder);
        if(it==ml.end()){
            cout<<finder<<" not found"<<endl;
        }
        else {
            int position = distance(ml.begin(), it)+1;
            cout<<finder<<" found at "<<position<<endl;
        }
    }
    cnt++;
    
}
int32_t main(void){
    optimize();
    //int tc = 1; cin>>tc;
    //clock_t z = clock();

    while(true){
        solve();
        if(n==0 && q==0) break;
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}

