class Solution {
public:
    bool isPalindrome(int x) {
         long long int ans=0;
        long long int temp=x;
        if(x<0) return false;
        while(x!=0){
            
            ans=(10*ans)+x%10;
            x=x/10;
        }
        cout<<ans<<endl;
        if(ans==temp)
            return true;
        
        
            return false;
    }
};