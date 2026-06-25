class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        int low = 0;
        int mid;
        int high = r - 1;
        while(low <= high)
        {
            mid = (low + high)/2;
            if(matrix[mid][c-1] >= target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        int rowidx = high + 1;
        if(rowidx > r-1) return false;
        low = 0;
        high = c-1;
        while(low <= high)
        {
            mid = (low + high) /2;
            if(matrix[rowidx][mid] >= target)
                high = mid -1;
            else
                low = mid + 1;
        }
        if(matrix[rowidx][high + 1] == target)
            return true;
        else
            return false;
        return false;
               

    }
};
// log n, sqrt(n), n, nlog n, n*n, 2^(n), O(1)

//O(1) < log n < sqrt(n) < n < nlog n < n*n  < 2^(n)

// 2 4 8 16 32 64 128