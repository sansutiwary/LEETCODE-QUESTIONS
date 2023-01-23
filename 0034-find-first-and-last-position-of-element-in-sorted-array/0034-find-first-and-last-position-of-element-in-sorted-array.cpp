class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> solution;
        int left=binerysearch(nums,target,true);
            int right=binerysearch(nums,target,false);
            solution.push_back(left);
            solution.push_back(right);
        return solution;
       
    }
    int binerysearch(vector<int>& nums, int target,bool leftsearch){
     int s=0;
        int e=nums.size()-1;
        int mid=e+(s-e)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]>target){
                
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]==target){
                ans=mid;
                if(leftsearch){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            mid=e+(s-e)/2;
        }
        return ans;
    }
};