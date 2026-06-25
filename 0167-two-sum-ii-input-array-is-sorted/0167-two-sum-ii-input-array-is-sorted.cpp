class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        // vector<int>arr[2];
        int start = 0;
        int end = numbers.size() - 1;
        while(start <= end)
        {
            if((numbers[start] + numbers[end]) == target )
           {
               return {start+1 , end+1};
            //    arr[0].push_back(start + 1 );
            //    arr[1].push_back(end + 1 );
           }
            else
            {
                if((numbers[start] + numbers[end]) < target )
                  start++;
                else
                    end--;
            }
        }
        return {};
    }
};