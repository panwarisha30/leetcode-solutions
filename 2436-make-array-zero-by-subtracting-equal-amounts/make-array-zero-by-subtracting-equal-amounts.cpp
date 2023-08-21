class Solution {
public:
    int minimumOperations(vector<int>& nums) {
            int cnt = 0;
            sort(nums.begin(), nums.end());

            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i] > 0)
                {
                    int num = nums[i];
                    cnt++;
                    for(int j=i; j<nums.size(); j++) 
                    {
                         nums[j] -= num;
                    }
                }
            }
            return cnt;
    }
};