class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]!=i+1){
                int correct=nums[i]-1;
                if(nums[i]!=nums[correct]) 
                {
                    swap(nums[i],nums[correct]);
                }
                else{
                    i++;
                }
                
            }
            else{
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(i+1!=nums[i]){
                ans.push_back(i+1);
            }
        }
       return ans; 
    }
};