class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int>s1 , s2; 
        vector<vector<int>> ans(2);
        for(auto m : nums1)
            s1.insert(m);
        for(auto n : nums2)
            s2.insert(n);
        for(auto m : s1)
            if(s2.count(m)==0)
                ans[0].push_back(m);
        for(auto n : s2)
            if(s1.count(n)==0)
                ans[1].push_back(n);
        return ans ;
    }
};