class Solution {
public:
    bool ispossible(int mid,vector<int>weights,int day){
        int sum=0;
        int d=1;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=mid){
                sum+=weights[i];
            }
            else{
                d++;
                if(d>day||weights[i]>mid){
                        return false;
                }
                sum=weights[i];
            }
        }
        return true; 
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=0;
        int sum=0;
        int ans=-1;
        for(int i=0;i<weights.size();i++){
                
            sum+=weights[i];
        }
        int e=sum;
        int mid=e+(s-e)/2;
        while(s<=e){
                
            if(ispossible(mid,weights,days)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
        mid=e+(s-e)/2;
        }
        return ans;
    }
};