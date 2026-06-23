class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            if((i == 0 || nums[i-1] < nums[i]) && (i == n-1) || nums[i] > nums[i + 1])
            return i;
        }
         return -1;
    }
   
};
// this is linear search tc is o(n) and space complixity is o(1)
// the -1 index i imagine -infinity and n+1 index is -infinity in that case answer in not in middle
// it check nums[i-1] < nums[i] > nums[i+1]