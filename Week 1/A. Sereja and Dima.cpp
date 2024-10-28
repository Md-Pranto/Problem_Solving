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
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int i=0,j=n-1;
    int sum1= 0,sum2=0;
    int man=1;
    while(i<=j){
        if(arr[i]>=arr[j]) {
            if(man==1) {sum1+=arr[i]; man=2;}
            else if(man==2) {sum2+= arr[i]; man = 1;}
            i++;
            continue;
        }
        if(man==1) {sum1+=arr[j]; man=2;}
        else if(man==2) {sum2+= arr[j]; man = 1;}
        j--;
        
        
        
    }
    cout<<sum1<<" "<<sum2<<endl;
    
    
    return 0;
}
