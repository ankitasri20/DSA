class Solution {
public:
    bool isAcronym(vector<string>& words, string s) 
    {
        string t;
        for(int i=0; i<words.size(); i++)
        {
                t+=(words[i][0]);    
            
            //t.push_back(words[0][0]);
            
        }
        //  if(t==s)
        //      return true;
        // else
        //     return false;
        return t==s;
        
    }
};