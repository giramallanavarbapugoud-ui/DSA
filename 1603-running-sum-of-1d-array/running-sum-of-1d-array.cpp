class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> num(n);
        num[0]=nums[0];
        for(int i=1;i<n;i++){
            int a=nums[i];
            int b=num[i-1];
            num[i]=b+a;
        }
        return num;
    }
};