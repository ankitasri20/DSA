class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int count = 0;
        for(int i=0 ; i<n; i++)
        {
            sum += nums[i];
        }
        while(sum != 0)
        {
             
        if(sum % k == 0)
        {
             return count;
            
        }
        else
        {
           sum = sum-1;
            count++;
        }
        }
        return count;
    }
};