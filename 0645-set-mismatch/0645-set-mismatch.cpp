class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        vector<int>arr(2);
        int n = nums.size();
        map<int ,int>mp;
        for(int i=1; i<=n; i++)
        {
            mp[i]=1;
        }
        for(int i=0; i<n; i++)
        {
            mp[nums[i]] +=1;
        }
        for(auto m : mp)
        {
            if(m.second == 3)
             arr[0] = m.first;
            else if (m.second == 1)
             arr[1] = m.first;
        }

        return arr;
    }
};