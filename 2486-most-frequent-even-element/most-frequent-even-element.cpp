class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++) 
        {
            if(nums[i]%2 == 0)
                mp[nums[i]]++;
        }
        int maxNum = -1;
        int maxFreq = 0;
        for(auto it:mp) 
        {
            if(it.second > maxFreq) {
                maxFreq = it.second;
                maxNum = it.first;
            }
        }

        return maxNum;
    }
};