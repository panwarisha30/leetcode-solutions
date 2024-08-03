class Solution {
public:
    int uniquePaths(int m, int n) {
        long long sol = 1;
        int x = max(m-1, n-1);
        int y = min(m-1, n-1);
        
        for (int i = 1; i <= y; ++i) {
            sol =sol* (x + i);
            sol =sol/ i;
        }
        
        return sol;
    }
};