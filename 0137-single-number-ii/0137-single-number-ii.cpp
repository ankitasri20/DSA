class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n;
        map<int , int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]+=1;
        }
        for(auto m : mp)
        {
            if(m.second < 3)
            n = m.first;        
        }
        return n;
    }
};