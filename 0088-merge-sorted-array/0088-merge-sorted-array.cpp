class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m-1;
        int b = n-1;
        for(int i = nums1.size() - 1; i>=0; i--)
        {
            if(a < 0)
            {
                while(b>=0)
                {
                    nums1[i--] = nums2[b--];
                }
                return;

            }
            if(b<0) return;
            if(nums1[a] > nums2[b])
            {
                nums1[i] = nums1[a--];
            }
            else
            {
                nums1[i] = nums2[b--];
            }
        }
        return;
    }
};