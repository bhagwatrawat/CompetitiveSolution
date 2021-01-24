class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2){
            return 0;
        }
        int ele=prices[0];
        int max= prices[1]-prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]-ele>max){
                max=prices[i]-ele; 
            }
            if(prices[i]<ele){
                ele=prices[i];
            }
        }
        if(max>=0){
            return max;
        }
        else {
            return 0;
        }
       
    }
};