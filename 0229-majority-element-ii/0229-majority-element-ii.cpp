class Solution {
public:
    vector<int> majorityElement(vector<int>& nums){
    vector<int>ans;
        int ele1 , ele2;
        int count1 = 0, count2 = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(count1 == 0 && nums[i] != ele2)
            {
                count1 = 1;
                ele1 = nums[i];
            }
            else if(count2 == 0 && nums[i] != ele1)
            {
                count2 = 1;
                ele2 = nums[i];
            }
            else if (ele1 == nums[i])
                count1++;
            else if (ele2 == nums[i])
                count2++;
            else
                count1-- , count2--;
        }
        int c1 = 0, c2 = 0;
        for(int i=0; i< nums.size(); i++)
        {
            if(ele1 == nums[i])
                c1++;
            else if(ele2 == nums[i])
                c2++;
        }
        int mini = (int)(nums.size()/3) + 1;
        if(c1 >= mini)
            ans.push_back(ele1);
        if(c2 >= mini)
            ans.push_back(ele2); 
        sort(ans.begin(), ans.end());

        return ans;
    }
};