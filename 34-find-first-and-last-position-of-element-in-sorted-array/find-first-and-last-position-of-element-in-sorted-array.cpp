class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v(2);

        int lo = 0;
        int hi = n-1;
        v[0] = -1;
        v[1] = -1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target){
                if(mid == 0){
                 v[0] = mid;
                    break;
                }
                else if(nums[mid-1] != target){
                    v[0] = mid;
                    break;
                }
                else hi = mid-1;
            }
           else if(nums[mid] > target) hi = mid-1;
           else if(nums[mid] < target) lo = mid+1;
        }
        

        lo = 0;
        hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target){
                if(mid == n-1){
                 v[1] = mid;
                    break;
                }
                else if(nums[mid+1]!= target){
                    v[1] = mid;
                    break;
                }
                else{
                    lo = mid+1;
                }
            }
           else if(nums[mid] > target) hi = mid-1;
           else if(nums[mid] < target) lo = mid+1;
        }
        
        
        return v;
    }
};