class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int mx=0;
        vector<bool> kid(n);
        for(int i=0;i<n;i++){
            if(mx<candies[i]){
                mx=candies[i];
            }
            else{
                mx=mx;
            }
        }
        for(int i=0;i<n;i++){
                if(candies[i]+extraCandies>=mx){
                    kid[i]=true;
                }
                else{
                    kid[i]=false;
                }
        }
        return kid;
    }
};