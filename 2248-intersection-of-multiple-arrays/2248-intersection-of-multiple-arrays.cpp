class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) 
    { 
        vector<int>arr;
        map<int , int >mp;
        int p = nums.size();
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0 ; j<nums[i].size(); j++)
            {
                mp[nums[i][j]]+=1;
            }
        }
        for(auto m : mp)
        {
            if(m.second == p)
            {
                arr.push_back(m.first);
            }
        }
        return arr;
    }
};