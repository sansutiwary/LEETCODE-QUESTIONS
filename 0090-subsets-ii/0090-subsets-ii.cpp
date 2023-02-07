class Solution {
public:
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
    void remove(vector<vector<int>> &ans)
    {
    auto end = ans.end();
    for (auto it = ans.begin(); it != end; ++it) {
        end = std::remove(it + 1, end, *it);
    }
 
    ans.erase(end, ans.end());
     }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        int index=0;
        sort(nums.begin(),nums.end());
        power(nums,output,index,ans);
        remove(ans);
        return ans;
    }
};