class Solution {
public:
    int findLucky(vector<int>& arr) {
       int n = arr.size();
       int ans = -1;
       map<int , int>mp;
       {
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]+=1;
        }
        for(auto m : mp)
        {
            if(m.first == m.second) ans = m.first;
        }

        return ans;
       } 
    }
};

// for the lucky number the frequency in the array equal to its value.
// so map it and store the frequenct and key then for check frequency and key are equal if equal then exist otherwaise not exist