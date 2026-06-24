class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        int low = 1, high = n-2;
        while(low <= high)
        {
            int mid =  (low + high)/2;

            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid + 1]){ return mid;
            }
            else if (nums[mid] > nums[mid - 1]) low = mid + 1;
            else high = mid - 1;

        }
        return -1;

    }
};

// done with binary search 
// if the first and last is peak then no need to check for Binary search
//in Binary Search start with 1 and n-2 when the mid is pointing to decreasing curve then peak will never be in deceresing curve but when muntiple peak it might be there but no need to check go in increasing curve side then check for mid  
