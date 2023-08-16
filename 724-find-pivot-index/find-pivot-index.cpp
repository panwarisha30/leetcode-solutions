class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int sum=0;
    for(int i=0; i< nums.size(); i++)
    {
        sum +=nums[i];
    }
    int lSum=0;
    int rSum=sum;
    for(int i=0; i<nums.size(); i++)
    {
        rSum-=nums[i];
        if(rSum==lSum)
        {
            return i;
        }
        lSum +=nums[i];
    }
    return -1;
    }
};