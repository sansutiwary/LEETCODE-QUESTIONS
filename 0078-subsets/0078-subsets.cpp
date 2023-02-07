class Solution {
   void power(vector<int>nums, vector<int> output,int index,vector<vector<int>> &ans){
       // base case
       if(index>=nums.size()){
           ans.push_back(output);
           return ;
       }
       
       //exclude
       power(nums,output,index+1,ans);
       
       //include
      int element=nums[index];
       output.push_back(element);
        power(nums,output,index+1,ans);
   }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        int index=0;
        power(nums,output,index,ans);
        return ans;
    }
};