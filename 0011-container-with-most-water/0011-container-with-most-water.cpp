class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int n=height.size()-1;
        for(int i=0,j=n;i<=n,j>=0,i<j;){
                int length=min(height[i],height[j]);
                int weadth=j-i;
                ans=max((length*weadth),ans);
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};