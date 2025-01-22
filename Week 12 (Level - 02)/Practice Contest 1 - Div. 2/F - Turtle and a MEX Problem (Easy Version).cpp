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
#define f0(i,n) for (ll i=0;i<n;i++)
#define f1(i,n) for (ll i=1;i<=n;i++)
#define vi vector<int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    int n,m; cin>>n>>m;
    int mex = 0; set<int> st;
    int len,a;
    f0(i,n){
        cin>>len;
        f0(i,len){
            cin>>a; st.insert(a);
        }
        int danger=0,ache=0;
        while(true){
            if(st.find(ache)==st.end()){
                if(!danger)danger = 1;
                else {
                    mex = max(mex,ache); break;
                }
            }
            ache++;
        }
        st.clear();
    }
    if(mex>=m){
        cout<<(m+1)*mex;
    }
    else {
        int val1 = mex*(mex+1);
        int val3 = m*(m+1)/2;
        int val2 = mex*(mex+1)/2;
        cout<<val1-val2+val3;
    }
    cout<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    //clock_t z = clock();
    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}
