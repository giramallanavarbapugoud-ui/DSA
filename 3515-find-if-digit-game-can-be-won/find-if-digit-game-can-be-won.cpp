class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        int ali=0;
        int bob=0;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int count=0;
            int b=nums[i];
            while(a!=0){
                int dig=a%10;
                count++;
                a=a/10;
            }
            if(count%2==0){
                bob=bob+b;
            }
            else{
                ali=ali+b;
            }
        }
        if(ali==bob){
            return false;
        }
        return true;
    }
};