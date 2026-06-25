class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       
       int x = 1e5;
       // int n = 0;
        int j = nums.size()  ;
        int curr = nums[0];
        int count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == curr)
            {
                count++;
                if(count >= 3)
                {
                    nums[i] = x;
                }
                
            }
            else
            {
                curr = nums[i];
                count = 1;
            }
        }

        sort(nums.begin() , nums.end());
        // for(auto i : nums)
        // {
        //     cout<<i<< " ";
        // }
     //   cout << endl;
     //   return n;
        int m=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == x)
            {
                m++;
            }
        }
       return j-m;
    }
};