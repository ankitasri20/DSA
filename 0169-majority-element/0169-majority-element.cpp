class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele;
        for(int i=0; i<nums.size(); i++)
        {
            if(count == 0)
            {
                count = 1;
                ele = nums[i];
            }
            else if (nums[i] == ele)
                count++;
            else 
                count--;
        }

        int c1 = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == ele)
                c1++;
        }
        if(c1 > nums.size() / 2)
            return ele;
        return -1;
    }
};

// Boyer-Moore Majority Voting Algorithm
// for finding element is that greater than n/2 time. 
// search the count (that is nums[i]) and compare the element till the count become 0 then change the value of nums[i] when it become 0.