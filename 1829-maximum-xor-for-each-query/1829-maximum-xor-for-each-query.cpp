class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        vector<int>ans(n);
        int xor1=0;
        for(auto &i:nums) xor1^=i;
        ans[0] = xor1^= (1 << maximumBit) - 1; 
        for(int i=1;i<n;i++){
            ans[i]=xor1^=nums[n-i];
        }
        return ans;
    }
};