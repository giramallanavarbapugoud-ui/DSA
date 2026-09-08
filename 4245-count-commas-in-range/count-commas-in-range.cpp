class Solution {
public:
    int countCommas(int n) {
        int count=0;
        int org=n;
        while(n!=0){
            int dig=n%10;
            count++;
            n=n/10;
        }
        if(count<=3){
            return 0;
        }
        int a=org-999;
        return a;
    }
};