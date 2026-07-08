class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>arr;
        int even = 0;
        int odd = 0;

        int n= nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i]% 2 ==0) even++;
            else odd++;
        }

        while(even--)
        {
            arr.push_back(0);
        }
        while(odd--)
        {
            arr.push_back(1);
        }
        return arr;
    }
};