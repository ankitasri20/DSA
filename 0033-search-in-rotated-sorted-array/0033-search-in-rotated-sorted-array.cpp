class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low <= high)
        {
            int mid = (low + high)/2;
            if(nums[mid] == target) return mid;
            
            if(nums[low] <= nums[mid])
            {
                if(nums[low] <=  target && target <= nums[mid]) high = mid-1;
                else low = mid +1;

            }
            else
            {
                if(nums[mid] <= target && target <= nums[high]) low = mid+1;
                else high = mid -1;
            }
        }
        return -1;
    }
};

// optimal solution tc= log(n) 
// array is sorted  but withg distinct element so check the mid and then identify the left half and right half  check which half in not containing target that on eelkement that sorted that not contain the target and then discard the part.
 