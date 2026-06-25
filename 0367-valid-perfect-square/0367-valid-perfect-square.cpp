class Solution {
public:
    bool isPerfectSquare(int num)
    {
      //  checkperfectsquare(num);
    if (ceil((double)sqrt(num)) == floor((double)sqrt(num))) 
    {
        return true;
    }
    else 
    {
        return false;
    } 
    }
};