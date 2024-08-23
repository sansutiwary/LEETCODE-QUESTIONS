class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int, int> countMap;
        vector<int> vrr;

        // Count occurrences of each element in the array
        for (int i = 0; i < arr.size(); ++i) {
            countMap[arr[i]]++;
        }

        // Store all occurrence counts in vector `vrr`
        for (auto& entry : countMap) {
            vrr.push_back(entry.second);
        }

        // Sort the vector `vrr` to check for duplicates
        sort(vrr.begin(), vrr.end());

        // Check if any adjacent counts are the same
        for (int j = 1; j < vrr.size(); ++j) {
            if (vrr[j] == vrr[j - 1]) {
                return false; // Duplicate occurrence count found
            }
        }

        return true; // All occurrence counts are unique
    }
};