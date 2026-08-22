class Solution {
public:
    bool checkGoodInteger(int n) {
        int digit=0;
        int rem=0;
        int sum=0;
        int sqr=0;
        while(n!=0){
            digit=n%10;
            sum=sum+digit;
            sqr=sqr+digit*digit;
            n=n/10;
        }
        int diff=sqr-sum;
        if(diff>=50){
            return true;
        }
        else 
        return false;
        
    }
};