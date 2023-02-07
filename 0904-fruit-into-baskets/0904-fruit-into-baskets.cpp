class Solution {
public:
    int totalFruit(vector<int>& f) {
         unordered_map<int, int> mpp;

        int i = 0, j = 0, maxi = -1;
        
        while(j < f.size())
        {

            mpp[f[j]]++;
            
            if(mpp.size() <= 2) 
                maxi = max(maxi, j-i+1);
            
            else
            {
                mpp[f[i]]--;

                if(mpp[f[i]] == 0) 
                    mpp.erase(f[i]);

                i++;
            }

            j++;
        }

        return maxi; 
    }
    
};