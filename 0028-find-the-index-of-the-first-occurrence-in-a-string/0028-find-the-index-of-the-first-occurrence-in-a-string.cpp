class Solution {
public:
    int strStr(string haystack, string needle) {
        int count=0;
        if(needle.size()==0) return 0;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[count]) count++;
            
            else if(haystack[i]!=needle[count]) {
                i-=count;
                count=0;
            }
            if(count==needle.size()) return i-=count-1;
        }
        return -1;
        
    }
};