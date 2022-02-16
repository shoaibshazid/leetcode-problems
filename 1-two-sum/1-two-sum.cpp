class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int mintarget=target-nums[i];
            if(mpp.find(mintarget)!=mpp.end()){ 
                int firstIndex=mpp[target-nums[i]];
                int secondIndex=i;
                ans.emplace_back(firstIndex);
                ans.emplace_back(secondIndex);
                return ans;
                
            } 
            mpp[nums[i]]=i;
        } 
        return ans;
    }
};