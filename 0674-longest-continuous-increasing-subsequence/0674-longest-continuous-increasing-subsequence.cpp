class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxlen = 1;
        int length = 1;
        int n = nums.size();
        for(int i= 1; i<n;i++){
            if (nums[i-1]<nums[i]){
                length++;
            }
            else{
                if(maxlen<length){
                   maxlen = length;
                }
                length = 1;
            }
        }
        return max(length, maxlen);
    }
};