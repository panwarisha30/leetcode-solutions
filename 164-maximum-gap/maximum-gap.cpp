class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        int diff=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            diff= nums[i+1]-nums[i];
            maxi=max(diff,maxi);
        }
        return maxi;
    }
};