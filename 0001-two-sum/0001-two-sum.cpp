class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size() - 1;
       
        vector<pair<int,int>> arr; //pair
        for(int i=0; i<=n; i++)
        {
            arr.push_back({nums[i], i}); //inserat in pair
        }
        sort(arr.begin(), arr.end()); //sort pair according to first position
        int low = 0;
        int high = n;
        while(low < high)
        {
            if(arr[high].first + arr[low].first > target) 
                high--;
            else if(arr[high].first + arr[low].first  == target)
            {
                ans.push_back(arr[high].second);
                ans.push_back(arr[low].second);

                return ans;
                
            }
            else
                low++;

        }
        return ans;
    }
};

// 2 7 11 15 
// 4 5 9 11 12 13    == 20

// x + y = t
// t - x = y 