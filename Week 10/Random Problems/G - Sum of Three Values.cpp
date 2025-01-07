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
    int n,x; cin>>n>>x;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i].first; v[i].second = i+1;
    }
    sort(all(v));
    for(int i=0;i<n;i++){
        int target = x-v[i].first;
        int l = i+1, r = n-1;
        while(l<r){
            int sum=v[l].first+v[r].first;
            if(sum==target){
                cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second<<endl;
                return;
            }
            else if(sum>target) r--;
            else if(sum<target) l++;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    
    
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

