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
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    x += 1;
    k -= 1;

    while (x>1) {
        if (x%y!= 0) {
            int lagbe = y-x%y;

            if (lagbe>=k) {
                x+= k;
                k = 0;
            } else {
                x+= lagbe;
                k-= lagbe;
            }
        }
        while(x%y==0) x/=y;
        if(k<=0) break;
    }
    if(k>0){
        k = k%(y-1);
        x+=k;
        while(x%y==0) x/=y;
    }

    cout<<x<<endl;
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    clock_t z = clock();
    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);

    }
    return 0;
}

 
