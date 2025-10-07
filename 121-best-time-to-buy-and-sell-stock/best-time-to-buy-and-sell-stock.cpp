class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=0,high=0;
        int result=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<prices[low]){
                if(result<prices[high]-prices[low]){
                    result=prices[high]-prices[low];
                }
                low=i;
                high=i;
            }
            if(prices[high]<prices[i]){
                high=i;
            }
        }
        if(low==high && result<0){
            return 0;
        }
        result=(result>prices[high]-prices[low])?result:(prices[high]-prices[low]);
        return result;
    }
};