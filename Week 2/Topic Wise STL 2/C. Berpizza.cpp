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
    int n; cin>>n;
    set<pair<int,int>>s;
    multiset<pair<int,int>> ml;
    vector<int> ans;
    int indx= 1;
    for(int i=1;i<=n;i++){
        int type,money; cin>>type;
        if(type==1){
            cin>>money;
            s.insert({indx,money});
            ml.insert({money,-indx}); indx++;
        }
        else if(type==2){
            int pos = s.begin()->first;
            int money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }else{
            int pos = -ml.rbegin()->second;
            int money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
        
    }
    for(auto val: ans){
        cout<<val<<" ";
    }
    
    
    cout<<endl;
    
    return 0;
}

 
