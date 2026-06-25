class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int , int>mp;
        int num;
        for(int i=0 ; i<nums.size(); i++)
        {
            mp[nums[i]] +=1;
        }
        for(auto i :mp)
        {
            if(i.second==1)
            {
                num = i.first;
            }
            
        }
            
        
        
        return num;
    }
};