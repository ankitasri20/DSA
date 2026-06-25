class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        int n = heights.size();
        int count = 0;
        vector<int>arr;
        for(int i=0; i<n; i++)
        {
            arr.push_back(heights[i]);
        }
        
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=heights[i])
                count++;
        }
        
        return count;
    }
};