class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            int i=nums.size()-1;
        return max(nums[0] * nums[1] * nums[i], nums[i] * nums[i - 1] * nums[i - 2]) ;
        
    }
};