class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MAX;
        vector<int> output;
        sort(nums.begin(),nums.end());
        if(n<=2){
            return nums[n-1];
        }
        else{
            for(int i=0;i<n-1;i++){
                if(nums[i]==nums[i+1]){
                    continue;
                }
                else{
                    output.push_back(nums[i]);
                }
                
            }
            output.push_back(nums[n-1]);
            int a=output.size();
            if(a<3){
                return output[a-1];
            }
            return output[output.size()-3];
        }
        return 0;
    }
};