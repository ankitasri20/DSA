class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        // sort(nums.begin(), nums.end());
        // reverse(nums.begin(), nums.end());
        map<int, int >mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]+=1;
        }
        vector<pair<int, int>>arr;
        for(auto m : mp)
        {
            pair<int, int>ans;
            ans.first = m.second;
            ans.second = m.first;
            arr.push_back(ans);
            
        }
        sort(arr.begin() , arr.end());
        reverse(arr.begin(), arr.end());
        for(int i=0; i<k; i++)
        {
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};

// 4 4 5 4 3 3
// 3 3 4 4 4 5