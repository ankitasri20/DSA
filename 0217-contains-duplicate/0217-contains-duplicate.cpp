class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map< int , int>arr;
        for(int i=0; i<nums.size(); i++)
        {
            arr[nums[i]] +=1;
        }
        for(auto i : arr)
        {
            if(i.second >=2)
            return true;
        }
        return false;
        
    }
};