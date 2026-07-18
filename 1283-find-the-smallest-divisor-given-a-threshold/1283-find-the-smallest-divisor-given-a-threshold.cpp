class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int low = 1, high = *max_element(nums.begin(), nums.end());
       while(low <= high)
       {
        int mid = (low + high) /2;
        if(sumby(nums, mid) <= threshold) high = mid -1;
        else low = mid + 1;
       }
       return low;
    }

    int sumby(vector<int>& nums, int div)
    {
        int sum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            sum = sum + ceil((double)(nums[i]) / (double)(div));
        }
        return sum;
    }
};

// TC -- O(n × log(max(nums)))
// in binary search start bs on 1 to max element when we get the threshold the value that determine the condition the divisor sum is less than equal to threshold there are f f f f  t t t and theb ans lie on last false;