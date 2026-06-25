class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) 
    {
        if(purchaseAmount % 10 == 0)
            return 100 - purchaseAmount;
        
        else
        {
            int n = purchaseAmount % 10;
            if(n<5)
            {
              return 100 - (purchaseAmount - n);
            }
            else
            {
                 return 100 - (purchaseAmount + (10-n));       
            }
        }
    }
};