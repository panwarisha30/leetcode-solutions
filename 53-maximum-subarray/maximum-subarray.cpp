class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long mx=INT_MIN;
        long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(mx<=sum)
            {
                mx=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return mx;
    }
};