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
const int mx = 1e3+7;
bool vis[mx][mx];
string grid[mx];
int r,c;
bool isValid(int xx,int yy){
    if(xx>=0 && yy>=0 && xx<r && yy<c) return true;
    else return false;
}
int x[4] = {1,-1,0,0},y[4] = {0,0,1,-1};
void dfs(int stx,int sty){
    vis[stx][sty] = true;
    for(int i=0;i<4;i++){
        int nx = stx+x[i];
        int ny = sty+y[i];
        if(isValid(nx, ny) && !vis[nx][ny] && grid[nx][ny]!='#'){
            dfs(nx,ny);
        }
    }
}
void solve(){
    cin>>r>>c;
    for(int i=0;i<r;i++){
        cin>>grid[i];
    }
    memset(vis,false,sizeof(vis));
    int cnt=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]!='#' &&!vis[i][j]){
                dfs(i,j); cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    
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

