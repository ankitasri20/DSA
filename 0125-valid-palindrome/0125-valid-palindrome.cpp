class Solution {
public:
    bool isPalindrome(string s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string arr="";
         for (auto ch : s) 
         {
            if (isalpha(ch) || isdigit(ch))
            arr += ch;
             
         }
        
        string p=arr;
        reverse(arr.begin() , arr.end());
        cout << p << " " << arr << endl;
        if(p==arr)
            return true;
        else
            return false;
        
    }
};