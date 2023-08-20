class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = -1;
        int s=0;
        int e = nums.size();
        
        int mid = (s+e)/2;
        
        while(s < e){
            if(mid == nums[mid]){
                s = mid+1;
            }else if(mid < nums[mid]){
                e = mid;
            }
            mid = (s+e)/2;
        }
        
        return s;
    }
};