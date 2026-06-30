class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        for(int i=0; i<n; i++)
        {
            if(arr[i] <= k)k++;
            else break;
        }
     return k;

    }
};

//  only extra array is removed  thake k poiner only for that then 
// from previous array
//given array is missing two many element and we have to find the kth missing element
//add a new array that contain all the element that given is miss add all element till k becouse you want only kth element 
//after get element till kth  return k-1 becouse k start fromn 0