class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        int first , second;
        while(low <= high)
        {
            mid = ( low + high ) / 2;
            if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        first = low;

        low =0;
        high =nums.size() - 1;
        while(low <= high)
        {
            mid = ( low + high ) / 2;
            if(nums[mid] <= target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        second =  low - 1;
        if(second < first) return {-1, -1};
        return {first, second};
    }
};