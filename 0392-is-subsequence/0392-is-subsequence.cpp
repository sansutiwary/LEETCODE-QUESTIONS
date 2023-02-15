class Solution {
    bool solv(string s, string t,int m,int n){
        
        if(m==0) return true;
        if(n==0) return false;
      
        if(t[n-1]==s[m-1]){
            return solv(s,t,m-1,n-1);
        }
        else
            return solv(s,t,m,n-1);
        
    }
public:
    bool isSubsequence(string s, string t) {
       
       
        if(solv(s,t,s.size(),t.size()))
            return true;
        return false;
    
    }
};