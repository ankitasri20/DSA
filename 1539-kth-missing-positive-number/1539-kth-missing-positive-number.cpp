class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size() -1;
        int low = 0 , high = n;
        int missing = 1;
        while(low <= high)
        {
            int mid = (low + high)/2;
            missing = arr[mid] - (mid +1);
            if(missing < k) low = mid +1;
            else high = mid -1;
        }
        return low + k;

    }
};

// i have to find two near by index then the kth missing lie between
