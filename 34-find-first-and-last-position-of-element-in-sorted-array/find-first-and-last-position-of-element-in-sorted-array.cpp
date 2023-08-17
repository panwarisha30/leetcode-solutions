class Solution {
 int lower_bound(vector<int>& nums, int s, int e, int target){
        while(s<= e){
            int mid = (s + e) >> 1;
            if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return s;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int startingPosition = lower_bound(nums, s, e, target);
        int endingPosition = lower_bound(nums, s, e, target + 1) - 1;
        if(startingPosition < nums.size() && nums[startingPosition] == target)
        {
            return {startingPosition, endingPosition};
        }
        return {-1, -1};
    }
};