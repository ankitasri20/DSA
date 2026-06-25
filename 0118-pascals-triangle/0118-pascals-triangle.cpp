class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>>arr;
        arr.push_back({1});
        for(int i = 1; i < n; i++)
        {
            vector<int>temp;
            temp.push_back(1);
            int prev = arr[i-1].size();

            for(int j=0; j<prev-1; j++)
            {
                int x = arr[i-1][j] + arr[i-1][j+1];
                temp.push_back(x);
            }
            temp.push_back(1);
            
            
            arr.push_back(temp);
        }
        return arr;
    }
};