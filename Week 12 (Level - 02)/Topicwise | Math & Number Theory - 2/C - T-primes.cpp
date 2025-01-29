#include<iostream>
#include<cstdbool>
#include<cmath>
using namespace std;
int main(){
    long long N = 1000000;
    long long t;
    long long arr[1000001] = {0};
    arr[1]=1;
        
    for(long long i=2;i<=sqrt(N);i++){
        if(arr[i]==0){
            for(long long j=i*i;j<=N;j+=i){
                arr[j]=1;
            }
        }
    }
    cin>>t;
    long long temp,n;
    for(long long i=0;i<t;i++){
        cin>>n;
        temp = sqrt(n);
        if(n!= temp*temp)
            cout<<"NO";
        else{
            if(arr[temp]==0)
                cout<<"YES";
            else
                cout<<"NO";
        }
        cout<<endl;
    }
    
    return 0;
}
