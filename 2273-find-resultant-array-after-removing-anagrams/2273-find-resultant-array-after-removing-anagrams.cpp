class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        string x=words[0];
        vector<string>ans;
        ans.push_back(x);
        sort(x.begin(),x.end());
        for(int i=1;i<words.size();i++)
        {
            string y=words[i];
            sort(y.begin(),y.end());
            if(x==y)
                continue;
            else{
                ans.push_back(words[i]);
                x=y;
            }
        }
        return ans;
    }
};

