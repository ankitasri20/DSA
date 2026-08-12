class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr;
        for(int  i=0; i<n; i++)
        {
            if(nums[i] < 10) arr.push_back(nums[i]);
            else
            {
                vector<int>temp;
                int num = nums[i];

                while(num > 0)
                {
                    int dig = num % 10;
                    temp.push_back(dig);
                    num /= 10;
                }
                 reverse(temp.begin(), temp.end());

                 for (int digit : temp) {
                arr.push_back(digit);
                 }
            }
        }

        return arr;
    }
};

