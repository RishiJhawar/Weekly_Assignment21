class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int i,mp;
        int profit=0;
        mp=prices[0];
        
        for(i=0; i<prices.size(); i++)
        {
            if(mp>prices[i])
            {
                mp=prices[i];
            }
            if(prices[i]-mp>profit)
            {
                profit=prices[i]-mp;
            }
        }
        return profit;
    }
};
