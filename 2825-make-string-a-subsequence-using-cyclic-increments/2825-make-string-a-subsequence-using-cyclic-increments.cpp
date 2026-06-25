class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) 
    {
        int n = str1.size(), m = str2.size(), i = 0, j = 0;
        
        while(j < n)
        {
            if(str1[j] == str2[i])
            {
                i++;
                j++;
            }
            else if(char(97 + (str1[j] - 'a' + 1)%26) == str2[i])
            {
                i++;
                j++;
            }
            else
                j++;
        }
        if(i != m)
            return false;
        
        return true;
    }
};