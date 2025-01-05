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
bool isPrime(int n){
    for(int i=2;i*i <=n;i++){
        if(n%i==0) return false;
    }
    return true;
    
}
int32_t main(void){
    int n; cin>>n;
    if(isPrime(n)) cout<<1;
    else if(!(n&1)) cout<<2;
    else if(n&1){
        if(isPrime(n-2)){
            cout<<2;
        }
        else cout<<3;
        
    }
    cout<<endl;
}
