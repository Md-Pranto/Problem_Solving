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

//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    int n; cin>>n;
    if(n&1){
        for(int i=1,j=n-1;i<=j;i++,j--){
            cout<<i<<" "<<j<<" ";
        }
        cout<<n<<endl;
    }
    else {
        for(int i=1,j=n;i<=j;i++,j--){
            cout<<i<<" "<<j<<" ";
        }
        cout<<endl;
        
    }
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

