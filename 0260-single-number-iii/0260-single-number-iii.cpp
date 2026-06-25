class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        vector<int>arr;
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]+=1;
        }
        for(auto m : mp)
        {
            if(m.second==1)
            arr.push_back(m.first);
        }
        return arr;
    }
};