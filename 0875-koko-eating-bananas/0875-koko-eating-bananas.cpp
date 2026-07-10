class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int  n = piles.size();
        int maxx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            maxx = max(maxx , piles[i]);
        }
        // return maxx;
        int low = 1, high = maxx;
        while(low <= high)
        {
           int  mid = (low + high) /2;
           long long totalH = 0;
           for(int i=0 ; i<n; i++)
           {
            totalH += (piles[i] + mid - 1) / mid;
           }
            if(totalH <= h) 
            {
                high = mid - 1;
            }
            else low = mid + 1;

        }
        return low;
    }
};