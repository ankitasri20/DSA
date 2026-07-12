class Solution {
public:
    int sumOfMultiples(int n) {
        long long sum = 0;
        while(n>0)
        {
            if(n%3 == 0)
            {
                sum += n;
                n--;
            }
            else if(n%5 == 0)
            {
                sum += n;
                n--;
            }
            else if(n%7 == 0)
            {
                sum += n;
                n--; 
            }
            else n--;
        }
         return sum;
    }
};