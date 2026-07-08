class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n = mountain.size() -1;
        vector<int>arr;
        for(int i=1; i<n; i++)
        {
            if(mountain[i] > mountain[i-1]  && mountain[i] > mountain[i+1]) 
            {
                arr.push_back(i);
            }
        }

        return arr;
    }
};