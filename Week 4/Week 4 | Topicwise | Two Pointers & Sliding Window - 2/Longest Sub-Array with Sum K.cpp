class Solution {
public:
int lenOfLongestSubarr(vector<int>& arr, int k) {
        int ans = 0;
        int l=0,r=0;
        int n = arr.size();
        ll sum=0;
        unordered_map<ll,int>mp;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        
        if(sum==k){
            ans = i+1;
        }
        if(mp.find(sum-k)!=mp.end()){
            ans = max(ans,i-mp[sum-k]);
        }
        
        if(mp.find(sum)==mp.end()){
            mp[sum] = i;
        }
        
    }
    return ans;
    }
};
