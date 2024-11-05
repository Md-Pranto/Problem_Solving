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
#define endl '\n'

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file

int main(void){
    optimize();
    vector<int> v(26,-1);
    string s; cin>>s;
    int len = s.length();
    for(int i=0;i<len;i++){
        int indx = s[i]-'a';
        v[indx] = 1;
    }
    int ans = -1;
    for(int i=0;i<26;i++){
        if(v[i]==-1){ans = i; break;}
    }
    if(ans<0) cout<<"None";
    else cout<<(char)(ans+'a');
    cout<<endl;
    
    
    return 0;
}


