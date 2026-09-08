class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int num=0;
            while(a!=0){
                int dig=a%10;
                num++;
                a=a/10;
            }
            if(num%2==0){
                even++;
            }
        }
        return even;
    }
};