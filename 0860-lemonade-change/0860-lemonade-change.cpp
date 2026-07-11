class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five = 0;
        int ten = 0;
        for(int i=0; i<n; i++)
        {
            if(bills[i] == 5) five++;
            else if(bills[i] == 10)
            {
                if(five == 0) return false;
                else
                {
                    five--;
                    ten++;
                }
            }
            else if(bills[i] == 20)
            {
                if(ten > 0 && five > 0)
                {
                    five--;
                    ten--;
                }
                else if(five >= 3)
                {
                    five -= 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};


// we have to return only 5 or 10 so track record of only 5 and 10
//when arr = 5 store the value of 5 how many time it come  five++
// when arr = 10 store the valiue of ten how many time its come 10++ and also return the customer 5
// when the value is 20 we have to return either 10 + 5 or  5 + 5 + 5