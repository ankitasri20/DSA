class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
    int ans = -1;
    int count  = 0;
    map<int , int>mp;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] % 2 == 0)
            mp[nums[i]]+=1;
    }
    for(auto m : mp)
    {
        if(m.second > count)
        {
            ans = m.first;
            count = m.second;
        }       
    }
    return ans;
    }
};