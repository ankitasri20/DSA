class Solution {
public:
    bool isAnagram(string s, string t) {
     if(s.length() != t.length())
        return false;
    
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
   // int j=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)!=t.at(i))
        {
            return false;
            i++;
        }
    }
    return true;
    }
};

// raam :: raxm