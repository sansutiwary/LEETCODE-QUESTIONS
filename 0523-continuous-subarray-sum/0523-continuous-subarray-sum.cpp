class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> map;
        map[0]=0;
        int sum=0;
        for(int i=0; i<nums.size();i++){
            sum+=nums[i];
           
            if(map.find(sum%k)==map.end()) map[sum%k]=i+1;
            
            else if(map[sum%k]<i) return true;
        }
        return false;
    }
};