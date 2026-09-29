class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> discount;
        for(int i=0;i<n-1;i++){
            int a=prices[i];
            for(int j=i+1;j<n;j++){
                if(prices[j] <= prices[i]){
                     a= prices[i]-prices[j];
                    
                    break;
                }
               


            }
            discount.push_back(a);
        }
        discount.push_back(prices[n-1]);
        return discount;
    }
};