class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        long long sz = arr.size(), ans=0;
        long long sum=0;
        int l=0;
        for(int r=0;r<sz;){
            sum+= arr[r];
            if(r-l+1==k){
                ans = max(sum,ans);
                sum-= arr[l]; l++; r++;
            }
            else r++;
        }
        
        
        
        
        return ans;
    }
};
