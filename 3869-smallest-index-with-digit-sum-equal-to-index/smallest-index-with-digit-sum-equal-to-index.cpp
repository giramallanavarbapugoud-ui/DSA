class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            int a=nums[i];
            while(a>0){
                int dig=a%10;
                sum=sum+dig;
                a=a/10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};