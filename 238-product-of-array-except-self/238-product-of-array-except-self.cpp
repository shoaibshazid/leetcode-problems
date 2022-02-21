class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>nums1(n);
        nums1[0]=nums[0];
        for(int i=1;i<n;i++){
            nums1[i]=nums[i]*nums1[i-1];
        } 
        int product=1;
        for(int i=n-1;i>0;i--){
            nums1[i]=nums1[i-1]*product;
            product*=nums[i];
        }
        nums1[0]=product;
        return nums1;
    }
};