class Solution {
    private:
    bool equal(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i])
                return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index= s1[i]-'a';
            count1[index]++;
        }
        
        int count2[26]={0};
        int i=0;
        int window=s1.length();
        while(i<window && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
            
        }
        if (equal(count1,count2))
            return 1;
        
        
        while(i<s2.length()){
            int newchar=s2[i]-'a';
            count2[newchar]++;
            
            int oldchar=s2[i-s1.length()];
            int index= oldchar-'a';
            count2[index]--;
            
            if (equal(count1,count2))
            return 1;
            i++;
        }
        return 0;
    }
};