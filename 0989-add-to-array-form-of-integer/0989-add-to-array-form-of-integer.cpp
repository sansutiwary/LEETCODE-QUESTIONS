class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int k) {
        for (int i = A.size() - 1; i >= 0 && k > 0; --i) {
            A[i] += k;
            k = A[i] / 10;
            A[i] %= 10;
        }
        while (k > 0) {
            A.insert(A.begin(), k% 10);
            k /= 10;
        }
        return A;
    }
};