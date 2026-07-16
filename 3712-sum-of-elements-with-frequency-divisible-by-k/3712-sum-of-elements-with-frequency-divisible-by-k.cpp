class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        map<int, int>mp;
        {
            for(int i = 0; i<n; i++)
            {
                mp[nums[i]]+=1;
            }
            for(auto m : mp)
            {
                if(m.second % k == 0)
                {
                    sum += m.second * m.first;
                }
            }
            return sum;
        }
    }
};
// TC - O(n log n)
//sc- O(m)