class Solution {
public:
    vector<int> sumZero(int n) {
        int a = 1;
        int b = -1;
        vector<int>arr;

        if (n % 2 == 1) 
        {
            arr.push_back(0);
            n--;
        }

        while(n>0)
        {     
            arr.push_back(a++);
            arr.push_back(b--);
            n-=2;                    
        }
        return arr;
    }
};