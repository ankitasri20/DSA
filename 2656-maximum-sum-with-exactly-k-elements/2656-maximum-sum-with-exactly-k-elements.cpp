class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxx = INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            maxx = max(maxx, nums[i]);
        }
        int sum = 0;
        while(k--)
        {
            sum += maxx;
            maxx = maxx + 1;            
        }
        return sum;
    }
};