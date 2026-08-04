class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int per = n / 4;
         int count = 1;
         int maxi = 0;

        for(int i = 1; i<n; i++)
        {
            if(arr[i] == arr[i - 1])
            {
                count++;
                if (count > per)
                    return arr[i];
            } 
            else count = 1;
        }
            return arr[0];
    }
};


