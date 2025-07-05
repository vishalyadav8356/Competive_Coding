class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int lo = 0;
        int hi = size-1;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) lo = mid+1;
            else hi= mid-1; 
        }
        return lo;
    }
};