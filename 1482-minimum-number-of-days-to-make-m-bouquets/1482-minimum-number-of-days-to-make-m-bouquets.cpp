class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        int n = bloomDay.size();
       if(n<(1LL*m*k)) return -1;
        int  maxx = INT_MIN;
        int mini = INT_MAX;        
        for(int i = 0; i<n; i++)
        {
            mini = min(mini, bloomDay[i]);
            maxx = max(maxx, bloomDay[i]);
        }
            int low = mini;
            int high = maxx;
            while(low<=high)
            {
                int  count = 0;
                int b = 0;
                int mid = (low + high) / 2;
                for(int i=0; i<n; i++)
                {
                    if(bloomDay[i] <= mid) count++;
                    else
                    {
                        b += (count / k);
                        count = 0;
                    }
            
                }
                b += count /k;
                if(b >= m)
                {
                    high = mid -1;
                }
                else
                {
                    low = mid + 1;
                }

                // return low;
            }
        return low;
    }
};