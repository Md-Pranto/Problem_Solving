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
string intTobit(int n){
    string s = "";
    while(n>0){
        if(n&1) s+='1';
        else s+='0';
        n/=2;
    }
    reverse(all(s));
    return s;
}
int stringToInt(string s){
    int n = 0;
    int len = s.length();
    for(int i=len-1;i>=0;i--){
        if(s[i]=='1') n+= (1<<(len-1-i));
    }
    return n;
}
void solve(){
    int n; cin>>n;
    string s = intTobit(n);
    int len = s.length();
    string s1(len,'0');
    string s2 = s;
    for(int i=0;i<len;i++){
        if(s[i]=='1'){
            s1[i] = '1';
            s2[i] = '0';
            break;
        }
    }
    int num1 = stringToInt(s1),num2 = stringToInt(s2);
    cout<<min(num1,num2)<<" "<<max(num1,num2)<<endl;
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

