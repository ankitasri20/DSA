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

// replace even with 0 and odd with 1 after that sort
// store how many odd and even are in the array
// then after push all even first and after push all odd then automatically  sorted