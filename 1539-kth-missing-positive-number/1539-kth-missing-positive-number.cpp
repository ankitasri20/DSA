class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>nums;
        int a = 1;
        int i = 0;
        while(nums.size() < k)
        {
            if(i < arr.size() && arr[i] == a)
            {
                i++;
            }
            else
            {
                nums.push_back(a);
            }
            a++;
        }

     return nums[k-1];

    }
};