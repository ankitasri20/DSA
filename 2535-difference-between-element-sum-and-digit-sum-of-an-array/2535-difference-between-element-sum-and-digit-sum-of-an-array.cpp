class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int ele_sum = 0;
        int dig_sum = 0;
        for(int i=0; i<n; i++)
        {
            ele_sum += nums[i];
        }
        for(int i=0; i<n; i++)
        {
            if(nums[i] < 10) dig_sum += nums[i];
            else
            {
                while (nums[i] > 0) 
                {
                    dig_sum += nums[i] % 10;   
                    nums[i] /= 10;  

                }          
            }
        }
        return  abs(dig_sum - ele_sum);
    }
};