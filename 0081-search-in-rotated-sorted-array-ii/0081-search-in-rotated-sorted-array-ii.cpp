class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low <= high)
        {
            int mid = (low + high)/2;
            if(nums[mid] == target) return true;
            if(nums[mid] == nums[low] && nums[mid]== nums[high])
            {
                high = high -1;
                low = low+1;
                continue;
            }
            
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
        return false;
    }
};

// optimal solution tc= log(n) 
// array is sorted  but with  not distinct element so check the mid and then identify the left half and right half  check which half in not containing target that on element that sorted that not contain the target and then discard the part.
 // same as part i but only change is there only unique elewment but here not unique so only one point the code is not working at if low and mid, high are same then sift the value of low and high then check for further