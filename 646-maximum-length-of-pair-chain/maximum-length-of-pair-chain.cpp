class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n =pairs.size();
        sort(pairs.begin(),pairs.end());
        int count = 1;
        int j = 0;

        for(int i = 1; i < n; i++)
        {
            if(pairs[j][1] < pairs[i][0])
            {
                count += 1;
                j = i;
            }
            else if(pairs[j][1] > pairs[i][1]) 
                j = i;
    }
    return count;
    }
};