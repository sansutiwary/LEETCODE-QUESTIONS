class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
vector<int> ans;
int n=nums.size();
for(int i=0;i<n;i++){
int pro1=1;
int pro2=1;
for(int j=0;j<i;j++){
pro1=nums[j]*pro1;
}
for(int j=i+1;j<n;j++){
pro2=nums[j]*pro2;
}
ans.push_back(pro1*pro2);
}
return ans;
}
};