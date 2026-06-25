class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() - 1;
        int a = -1;
        for(int i = n; i > 0; i--)
        {
            if(nums[i] > nums[i-1]) // COMPARE the array fron end eg :[5,4,1,6,3,2]
             // 2 > 3 no 3 > 6 no 6 > 1 true
            {
                a = i; //a = 4
                for(int j = n; j>0; j--)
                {
                    if(nums[i-1] < nums[j]) // 3 < 2 no 6 < 3 no 1 < 6 true  
                    {
                     swap(nums[i-1], nums[j]); // then swap 1 to j (1,6,3,2)  after swap == 5,4,2,6,3,1]
                     break;
                    }
                }
                //1 3 2
                // 1 2 3
                break;
            }  
        }
        if(a == -1)
            reverse(nums.begin(), nums.end()); //sort full array
        else
            reverse(nums.begin() + a, nums.end()); // [5,4,2,1,3,6]

    
        
    }
};

// 5 4 1 6 3 2
// 5 4 2 6 3 1
// 5 4 2 1 3 6

// 6 5 4 3 7 1 2 3 9
// 6 5 4 3 7 1 2 9 3 