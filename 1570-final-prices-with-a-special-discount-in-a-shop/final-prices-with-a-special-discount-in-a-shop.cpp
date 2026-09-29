class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> discount;
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(prices[j] <= prices[i]){
                    int a= prices[i]-prices[j];
                    discount.push_back(a);
                    break;
                }
                if(j==n-1 && prices[j] > prices[i]){
                    discount.push_back(prices[i]);
                    break;
                }


            }
        }
        discount.push_back(prices[n-1]);
        return discount;
    }
};