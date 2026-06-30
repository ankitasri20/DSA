class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>nums;
        int a = 1;
        int i = 0;
        while(nums.size() < k)
        {
            if(i < arr.size() && arr[i] == a)
            {
                i++;
            }
            else
            {
                nums.push_back(a);
            }
            a++;
        }

     return nums[k-1];

    }
};

//given array is missing two many element and we have to find the kth missing element
//add a new array that contain all the element that given is miss add all element till k becouse you want only kth element 
//after get element till kth  return k-1 becouse k start fromn 0