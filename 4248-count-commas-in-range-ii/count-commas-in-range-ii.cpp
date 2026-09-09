class Solution {
public:
    long long countCommas(long long n) {
        int count=0;
        long long com=0;
        long long org=n;
        while(n!=0){
            int dig=n%10;
            count++;
            n=n/10;
        }
        if(count<=3) return 0;
        if(count>3 && count <=6){
            com=org-999;
        }
        if(count>6 && count<=9){
            long a=org-999;
            long b=org-999999;
            com=a+b;
        }
        if(count>9 && count <=12){
            long a=org-999;
            long b=org-999999;
            long c=org-999999999;
            com=a+b+c;
        }
         if(count>12 && count<=15){
            long a=org-999;
            long b=org-999999;
            long c=org-999999999;
            long d=org-999999999999;
            com=a+b+c+d;
        }
       
        if(count>15 && count<=18){
            long a=org-999;
            long b=org-999999;
            long c=org-999999999;
            long d=org-999999999999;
            long e=org-999999999999999;
            com=a+b+c+d+e;
        }
        return com;
    }
};